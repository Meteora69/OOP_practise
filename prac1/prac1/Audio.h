#pragma once
#include <iostream>
#include <string>
using namespace std;
class Audio
{
protected:
    int id;
    std::string name;
    std::string author;
    int year;
    int duration;
public:
 Audio() : id(0), name("not found"), author("not found"), year(0), duration(0){

 }
 friend std::istream& operator>> (std::istream& in, Audio& song) {
     std::cout << "ID: ";
     in >> song.id;
     std::cout << "Name: ";
     in >> song.name;
     std::cout << "Author: ";
     in >> song.author;
     std::cout << "Year: ";
     in >> song.year;
     std::cout << "Duration: ";
     in >> song.duration;

     return in;

 }
 virtual void input() {
     std::cout << "ID: ";
     cin >> id;
     std::cout << "Name: ";
     cin >> name;
     std::cout << "Author: ";
     cin >> author;
     std::cout << "Year: ";
     cin >> year;
     std::cout << "Duration: ";
     cin >> duration;
 }
 friend std::ostream& operator<<(std::ostream& out, Audio& song) {
     out << " Data:" << std::endl;
     out << "ID: " << song.id << std::endl;
     out << "Name: " << song.name << std::endl;
     out << "Author: " << song.author << std::endl;
     out << "Year: " << song.year << std::endl;
     out << "Duration: " << song.duration << std::endl;
     return out;
 }
 virtual void printMessage() {
     std::cout << "virtual Function class Audio"<<endl;
 }
 ~Audio(){}
};

