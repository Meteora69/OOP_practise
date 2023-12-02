#include "audio.h"

void Audio::setId(int id) {
    this->id = id;
}
int Audio::getId() const {
    return id;
}
QString Audio::getName() const{
   return name;
}
QString Audio::getAuthor() const{
   return author;
}
int Audio::getYear() const { return year; }
 int Audio::getDuration() const { return duration; }


