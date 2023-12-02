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
    virtual void PrintMessage()=0;
 Audio() : id(0), name("not found"), author("not found"), year(0), duration(0){}
 void setId(int id);
 int getId() const;
QString getName() const;
QString getAuthor() const;
int getYear() const;
 int getDuration() const;
  virtual QString getType() const = 0;

 ~Audio(){}
};

#endif // AUDIO_H
