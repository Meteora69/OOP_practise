#pragma once
#include <iostream>
#include <string>

class Song {
private:
    int id;
    std::string name;
    std::string artist;
    std::string album;
    std::string genre;
    std::string lyricist;
    std::string language;
    int year;
    int duration;

public:

    Song() : id(0), name("not found"), artist("not found"), album("not found"), genre("not found"), lyricist("not found"), language("not found"), year(0), duration(0) {

    }


    Song(int id, const std::string& name, const std::string& artist, const std::string& album, const std::string& genre, const std::string& lyricist, const std::string& language, int year, int duration) {
        this->id = id;
        this->name = name;
        this->artist = artist;
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
        this->artist = other.artist;
        this->album = other.album;
        this->genre = other.genre;
        this->lyricist = other.lyricist;
        this->language = other.language;
        this->year = other.year;
        this->duration = other.duration;
    }
    void print() const {
        std::cout << "ID: " << id << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Artist: " << artist << "\n";
        std::cout << "Album: " << album << "\n";
        std::cout << "Genre: " << genre << "\n";
        std::cout << "Lyricist: " << lyricist << "\n";
        std::cout << "Language: " << language << "\n";
        std::cout << "Year: " << year << "\n";
        std::cout << "Duration: " << duration << " seconds\n";
    }


    ~Song() {

    }


};