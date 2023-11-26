#ifndef AUDIO_H
#define AUDIO_H



#include <iostream>
#include <QString>
using namespace std;
class Audio
{
protected:
    int id;
    QString name;
    QString author;
    int year;
    int duration;
public:
 Audio() : id(0), name("not found"), author("not found"), year(0), duration(0){

 }
 void setId(int id) {
     this->id = id;
 }
 int getId() {
     return id;
 }

 ~Audio(){}
};

#endif // AUDIO_H
