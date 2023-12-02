#ifndef SONG_H
#define SONG_H


#pragma once
#include "audio.h"
#include <iostream>
#include <QString>
using namespace std;
class Song :public Audio {
private:

    QString album;
    QString genre;
    QString lyricist;
    QString language;

public:

    Song() :  album("not found"), genre("not found"), lyricist("not found"), language("not found") {

    }

    Song(int id, const QString& name, const QString& author, const QString& album, const QString& genre, const QString& lyricist, const QString& language, int year, int duration);

    Song(const Song& other);



    bool operator==(const Song& other) const ;
    QString toString() const ;
    QString getAlbum() const ;
       QString getGenre() const;
       QString getLyricist() const;
       QString getLanguage() const;
       QString getType() const;
       void PrintMessage() override{

       }
    ~Song() {

    }
};
#endif // SONG_H
