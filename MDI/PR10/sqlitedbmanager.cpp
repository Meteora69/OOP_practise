#include "sqlitedbmanager.h"
#include <QFile>
#include <QTextStream>
#include <QDateTime>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager* SqliteDBManager::getInstance(){
    if (instance == nullptr) {
        instance = new SqliteDBManager();
    }
    return instance;
}

void SqliteDBManager::connectToDataBase() {
    try {
        if (QFile(DATABASE_FILE_NAME_1).exists()) {
            this->openDataBase();
        } else {
            this->restoreDataBase();
        }
    } catch (const std::exception& e) {
        logError(e.what());
    }
}

QSqlDatabase SqliteDBManager::getDB() {
    return db;
}

bool SqliteDBManager::inserIntoTable(const Audio& audio) {
    QSqlQuery query;

    try {
        if (const Song* song = dynamic_cast<const Song*>(&audio)) {
            query.prepare("INSERT INTO " TABLE_SONG " ( "
                          TABLE_SONG_NAME ", "
                          TABLE_SONG_AUTHOR ", "
                          TABLE_SONG_ALBUM ", "
                          TABLE_SONG_GENRE ", "
                          TABLE_SONG_LYRICIST ", "
                          TABLE_SONG_LANGUAGE ", "
                          TABLE_SONG_YEAR ", "
                          TABLE_SONG_DURATION " ) "
                          "VALUES (:Name, :Author, :Album, :Genre, :Lyricist, :Language, :Year, :Duration )");
            query.bindValue(":Name", song->getName());
            query.bindValue(":Author", song->getAuthor());
            query.bindValue(":Album", song->getAlbum());
            query.bindValue(":Genre", song->getGenre());
            query.bindValue(":Lyricist", song->getLyricist());
            query.bindValue(":Language", song->getLanguage());
            query.bindValue(":Year", song->getYear());
            query.bindValue(":Duration", song->getDuration());

            if (!query.exec()) {
                throw std::runtime_error("Error inserting into " + QString(TABLE_SONG).toStdString());
            }
        } else if (const Audiobook* audiobook = dynamic_cast<const Audiobook*>(&audio)) {
            query.prepare("INSERT INTO " TABLE_AUDIOBOOK " ( "
                          TABLE_AUDIOBOOK_NAME ", "
                          TABLE_AUDIOBOOK_AUTHOR ", "
                          TABLE_AUDIOBOOK_PUBLISHER ", "
                          TABLE_AUDIOBOOK_YEAR ", "
                          TABLE_AUDIOBOOK_DURATION ", "
                          TABLE_AUDIOBOOK_PRICE ", "
                          TABLE_AUDIOBOOK_AUDIO_FORMAT " ) "
                          "VALUES (:Name, :Author, :Publisher, :Year, :Duration, :Price, :AudioFormat )");
            query.bindValue(":Name", audiobook->getName());
            query.bindValue(":Author", audiobook->getAuthor());
            query.bindValue(":Publisher", audiobook->getPublisher());
            query.bindValue(":Year", audiobook->getYear());
            query.bindValue(":Duration", audiobook->getDuration());
            query.bindValue(":Price", audiobook->getPrice());
            query.bindValue(":AudioFormat", audiobook->getAudioFormat());

            if (!query.exec()) {
                throw std::runtime_error("Error inserting into " + QString(TABLE_AUDIOBOOK).toStdString());
            }
        } else {
            throw std::invalid_argument("Unsupported audio type");
        }

    } catch (const std::exception& e) {
        logError(e.what());
        return false;
    }

    return true;
}

SqliteDBManager::SqliteDBManager(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOST_NAME);
    db.setDatabaseName(DATABASE_FILE_NAME_1);
}

bool SqliteDBManager::openDataBase(){
    try {
        if (db.open()) {
            return true;
        } else {
            throw std::runtime_error("Failed to open database");
        }
    } catch (const std::exception& e) {
        logError(e.what());
        return false;
    }
}

bool SqliteDBManager::restoreDataBase(){
    try {
        if (this->openDataBase()) {
            if (!this->createTables()) {
                return false;
            } else {
                return true;
            }
        } else {
            throw std::runtime_error("Failed to restore database");
        }
    } catch (const std::exception& e) {
        logError(e.what());
        return false;
    }
}

void SqliteDBManager::closeDataBase(){
    db.close();
}

bool SqliteDBManager::createTables() {
    QSqlQuery query;

    try {
        if (!query.exec("CREATE TABLE " TABLE_AUDIOBOOK " ("
                        TABLE_AUDIOBOOK_ID              " INTEGER PRIMARY KEY AUTOINCREMENT, "
                        TABLE_AUDIOBOOK_NAME            " VARCHAR(255)    NOT NULL,"
                        TABLE_AUDIOBOOK_AUTHOR          " VARCHAR(255)    NOT NULL,"
                        TABLE_AUDIOBOOK_PUBLISHER       " VARCHAR(255)    NOT NULL,"
                        TABLE_AUDIOBOOK_YEAR            " INTEGER         NOT NULL,"
                        TABLE_AUDIOBOOK_DURATION        " INTEGER         NOT NULL,"
                        TABLE_AUDIOBOOK_PRICE           " INTEGER         NOT NULL,"
                        TABLE_AUDIOBOOK_AUDIO_FORMAT    " VARCHAR(255)    NOT NULL"
                        " )"
        )) {
            throw std::runtime_error("Database error creating table " + QString(TABLE_AUDIOBOOK).toStdString());
        } else {
            if (!query.exec("CREATE TABLE IF NOT EXISTS " TABLE_SONG " ("
                            TABLE_SONG_ID                   " INTEGER PRIMARY KEY AUTOINCREMENT, "
                            TABLE_SONG_NAME                 " VARCHAR(255)    NOT NULL,"
                            TABLE_SONG_AUTHOR               " VARCHAR(255)    NOT NULL,"
                            TABLE_SONG_ALBUM                " VARCHAR(255)    NOT NULL,"
                            TABLE_SONG_GENRE                " VARCHAR(255)    NOT NULL,"
                            TABLE_SONG_LYRICIST             " VARCHAR(255)    NOT NULL,"
                            TABLE_SONG_LANGUAGE             " VARCHAR(255)    NOT NULL,"
                            TABLE_SONG_YEAR                 " INTEGER         NOT NULL,"
                            TABLE_SONG_DURATION             " INTEGER         NOT NULL"
                            " )"
            )) {
                throw std::runtime_error("Database error creating table " + QString(TABLE_SONG).toStdString());
            }
        }
    } catch (const std::exception& e) {
        logError(e.what());
        return false;
    }

    return true;
}

void SqliteDBManager::logError(const QString& error) {
    QFile logFile("logfile.txt");
    if (logFile.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream stream(&logFile);
        stream << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ") << error << "\n";
        logFile.close();
    }
}

