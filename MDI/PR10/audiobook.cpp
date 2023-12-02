#include "audiobook.h"


Audiobook::Audiobook(int id, const QString& name, const QString& author, const QString& publisher,
    int year, int duration, int price, const QString& audioFormat) {
    this->id = id;
    this->name = name;
    this->author = author;
    this->publisher = publisher;
    this->year = year;
    this->duration = duration;
    this->price = price;
    this->audioFormat = audioFormat;
}

Audiobook::Audiobook(const Audiobook& other)
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


bool Audiobook::operator==(const Audiobook& other) const {
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

QString Audiobook::toString() const {
        return QString("ID: %1 Name: %2 Author: %3 Publisher: %4 Price: %5 Audio format:  %6 Year: %7 Duration: %8 seconds")
            .arg(id)
            .arg(name)
            .arg(author)
            .arg(publisher)
            .arg(price)
            .arg(audioFormat)
            .arg(year)
            .arg(duration);
    }
QString Audiobook::getPublisher() const { return publisher; }
   int Audiobook::getPrice() const { return price; }
   QString Audiobook::getAudioFormat() const { return audioFormat; }
   QString Audiobook::getType() const {
       return "Audiobook";
   }
