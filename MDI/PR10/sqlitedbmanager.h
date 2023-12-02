#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include "dbmanager.h"

#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>


#define DATABASE_HOST_NAME   "ExampleDataBase"
#define DATABASE_FILE_NAME_1   "DataBase.sqlite"

#define TABLE_SONG      "Songs"
#define TABLE_SONG_ID  "id"
#define TABLE_SONG_NAME "name"
#define TABLE_SONG_AUTHOR  "author"
#define TABLE_SONG_ALBUM  "album"
#define TABLE_SONG_GENRE  "genre"
#define TABLE_SONG_LYRICIST  "lyricist"
#define TABLE_SONG_LANGUAGE  "language"
#define TABLE_SONG_YEAR  "year"
#define TABLE_SONG_DURATION  "duration"

#define TABLE_AUDIOBOOK      "Audiobooks"
#define TABLE_AUDIOBOOK_ID   "id"
#define TABLE_AUDIOBOOK_NAME "name"
#define TABLE_AUDIOBOOK_AUTHOR  "author"
#define TABLE_AUDIOBOOK_PUBLISHER  "publisher"
#define TABLE_AUDIOBOOK_YEAR  "year"
#define TABLE_AUDIOBOOK_DURATION  "duration"
#define TABLE_AUDIOBOOK_PRICE  "price"
#define TABLE_AUDIOBOOK_AUDIO_FORMAT  "audioFormat"

class SqliteDBManager : public DBManager {
public:
    static SqliteDBManager* getInstance();
    void connectToDataBase();
    QSqlDatabase getDB();
    bool inserIntoTable(const Audio& audio);
    //bool inserIntoTable(const Audiobook& audiobook);
private:
     QSqlDatabase db;
     static SqliteDBManager* instance;
     SqliteDBManager();
     bool openDataBase();
     bool restoreDataBase();
     void closeDataBase();
     bool createTables();
};









#endif // SQLITEDBMANAGER_H
