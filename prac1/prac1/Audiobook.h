#pragma once
#include <iostream>
#include <string>
class Audiobook {
private:
    int id;
    std::string title;
    std::string author;
    std::string publisher;
    int year; 
    int duration;
    double price;
    std::string audioFormat;

public:

    Audiobook() : id(0), title("not found"), author("not found"), publisher("not found"), year(0), duration(0), price(0.0), audioFormat("not found") {

    }

    Audiobook(int id, const std::string& title, const std::string& author, const std::string& publisher,
        int year, int duration, double price, const std::string& audioFormat) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->publisher = publisher;
        this->year = year;
        this->duration = duration;
        this->price = price;
        this->audioFormat = audioFormat;
    }

    Audiobook(const Audiobook& other)
    {
        this->id = other.id;
        this->title = other.title;
        this->author = other.author;
        this->publisher = other.publisher;
        this->year = other.year;
        this->duration = other.duration;
        this->price = other.price;
        this->audioFormat = other.audioFormat;
    }
    friend std::istream& operator>> (std::istream& in, Audiobook& audiobook) {
        std::cout << "ID: ";
        in >> audiobook.id;
        std::cout << "Title: ";
        in >> audiobook.title;
        std::cout << "Author: ";
        in >> audiobook.author;
        std::cout << "Publisher: ";
        in >> audiobook.publisher;
        std::cout << "Publication Year: ";
        in >> audiobook.year;
        std::cout << "Duration: ";
        in >> audiobook.duration;
        std::cout << "Price: ";
        in >> audiobook.price;
        std::cout << "Audio Format: ";
        in >> audiobook.audioFormat;

        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, Audiobook& audiobook) {
        out << "Data:" << std::endl;
        out << "ID: " << audiobook.id << std::endl;
        out << "Title: " << audiobook.title << std::endl;
        out << "Author: " << audiobook.author << std::endl;
        out << "Publisher: " << audiobook.publisher << std::endl;
        out << "Publication Year: " << audiobook.year << std::endl;
        out << "Duration: " << audiobook.duration << " seconds" << std::endl;
        out << "Price: " << audiobook.price << " USD" << std::endl;
        out << "Audio Format: " << audiobook.audioFormat << std::endl;

        return out;
    }

    bool operator==(const Audiobook& other) const {
        return (
            id == other.id &&
            title == other.title &&
            author == other.author &&
            publisher == other.publisher &&
            year == other.year &&
            duration == other.duration &&
            price == other.price &&
            audioFormat == other.audioFormat);
    }
    

    ~Audiobook() {

    }
};

