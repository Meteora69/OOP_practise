#include "song.h"

Song::Song(int id, const QString& name, const QString& author, const QString& album, const QString& genre, const QString& lyricist, const QString& language, int year, int duration) {
    this->id = id;
    this->name = name;
    this->author = author;
    this->album = album;
    this->genre = genre;
    this->lyricist = lyricist;
    this->language = language;
    this->year = year;
    this->duration = duration;
}

Song::Song(const Song& other)
{
    this->id = other.id;
    this->name = other.name;
    this->author = other.author;
    this->album = other.album;
    this->genre = other.genre;
    this->lyricist = other.lyricist;
    this->language = other.language;
    this->year = other.year;
    this->duration = other.duration;
}




bool Song::operator==(const Song& other) const {
    return  (
        id == other.id &&
        name == other.name &&
        author == other.author &&
        album == other.album &&
        genre == other.genre &&
        lyricist == other.lyricist &&
        language == other.language &&
        year == other.year && duration == other.duration);
}
QString Song::toString() const {
        return QString("ID: %1 Name: %2 Author: %3 Album: %4 Genre: %5 Lyricist: %6 Language: %7 Year: %8 Duration: %9 seconds")
            .arg(id)
            .arg(name)
            .arg(author)
            .arg(album)
            .arg(genre)
            .arg(lyricist)
            .arg(language)
            .arg(year)
            .arg(duration);
    }
QString Song::getAlbum() const { return album; }
QString Song::getGenre() const { return genre; }
QString Song::getLyricist() const { return lyricist; }
QString Song::getLanguage() const { return language; }
QString Song::getType() const {
    return "Song";
}
