#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H


#include "audio.h"
#include <iostream>
#include <QString>
using namespace std;
class Audiobook:public Audio {
private:
    QString publisher;
    int price;
    QString audioFormat;

public:

    Audiobook() : publisher("not found"),  price(0.0), audioFormat("not found") {}

    Audiobook(int id, const QString& name, const QString& author, const QString& publisher,
        int year, int duration, int price, const QString& audioFormat) ;
    Audiobook(const Audiobook& other);


    bool operator==(const Audiobook& other) const ;

    QString toString() const;
    QString getPublisher() const;
    QString getAudioFormat() const;
    int getPrice() const;
    QString getType() const;
    void PrintMessage() override{

    }

    ~Audiobook() { }
};

#endif // AUDIOBOOK_H
