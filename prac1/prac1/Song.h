#pragma once
#include "Audio.h"
#include <iostream>
#include <string>
using namespace std;
class Song :public Audio {
private:
     
    std::string album;
    std::string genre;
    std::string lyricist;
    std::string language;
    
public:

    Song() :  album("not found"), genre("not found"), lyricist("not found"), language("not found") {

    }

    Song(int id, const std::string& name, const std::string& author, const std::string& album, const std::string& genre, const std::string& lyricist, const std::string& language, int year, int duration) {
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

    Song(const Song& other)
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

    friend std::istream& operator>> (std::istream& in, Song& song) {
        std::cout << "ID: ";
        in >> song.id;
        std::cout << "Name: ";
        in >> song.name;
        std::cout << "Author: ";
        in >> song.author;
        std::cout << "Album: ";
        in >> song.album;
        std::cout << "Genre: ";
        in >> song.genre;
        std::cout << "Lyricist: ";
        in >> song.lyricist;
        std::cout << "Language: ";
        in >> song.language;
        std::cout << "Year: ";
        in >> song.year;
        std::cout << "Duration: ";
        in >> song.duration;

        return in;

    }
 void input() override {
        Audio::input();
        std::cout << "Album: ";
        cin >> album;
        std::cout << "Genre: ";
        cin >> genre;
        std::cout << "Lyricist: ";
        cin >> lyricist;
        std::cout << "Language: ";
        cin >> language;
    }
    friend std::ostream& operator<<(std::ostream& out, Song& song) {
        out << " Data:" << std::endl;
        out << "ID: " << song.id << std::endl;
        out << "Name: " << song.name << std::endl;
        out << "Author: " << song.author << std::endl;
        out << "Album: " << song.album << std::endl;
        out << "Genre: " << song.genre << std::endl;
        out << "Lyricist: " << song.lyricist << std::endl;
        out << "Language: " << song.language << std::endl;
        out << "Year: " << song.year << std::endl;
        out << "Duration: " << song.duration << std::endl;
        return out;
    }
    bool operator==(const Song& other) const {
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
    void printMessage() override {
        std::cout << "virtual Function class Song" << endl;
    }

    ~Song() {

    }
};
