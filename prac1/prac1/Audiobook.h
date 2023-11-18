#pragma once
#include "Audio.h"
#include <iostream>
#include <string>
class Audiobook:public Audio {
private:
    std::string publisher;
    double price;
    std::string audioFormat;

public:

    Audiobook() : publisher("not found"),  price(0.0), audioFormat("not found") {
       
    }

    Audiobook(int id, const std::string& name, const std::string& author, const std::string& publisher,
        int year, int duration, double price, const std::string& audioFormat) {
        this->id = id;
        this->name = name;
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
        this->name = other.name;
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
        std::cout << "name: ";
        in >> audiobook.name;
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
        out << "name: " << audiobook.name << std::endl;
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
            name == other.name &&
            author == other.author &&
            publisher == other.publisher &&
            year == other.year &&
            duration == other.duration &&
            price == other.price &&
            audioFormat == other.audioFormat);
    }
    void printMessage() override{
        std::cout << "virtual Function class Audiobook";
    }

    ~Audiobook() {

    }
};

