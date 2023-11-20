#include "Song.h"
#include "Audiobook.h"
#include "Audio.h"
#include  "Vector.h"
#include <iostream>

int main()
{
	Vector<int> intVector;
	intVector.push_back(2);
	intVector.push_back(4);
	intVector.push_back(-8);
	Vector<double> doubleVector;
	doubleVector.push_back(2);
	doubleVector.push_back(2.2);
	doubleVector.push_back(-5.4);
	doubleVector.arrPrint();
	intVector.arrPrint();
	Song song1;
	Song song2(1, "Riptade", "jhon", "nature", "pop", "text...", "Eng", 2011, 180);
	Audiobook book1;
	Audiobook book2(2, "The Art of Programming", "Donald Knuth", "PublisherX", 2022, 3600, 29.99, "MP3");

	Vector<Audio> classVector;
	classVector.push_back(song1);
	classVector.push_back(song2);
	classVector.push_back(book1);
	classVector.push_back(book2);
	classVector.arrPrint();
	return 0;
}

