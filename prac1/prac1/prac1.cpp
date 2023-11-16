#include "Song.h"

#include <iostream>

int main()
{
	Song song1;
	//Song song2(1,"Riptade", "jhon", "nature", "pop", "text...","Eng",2011,180);
	//Song song3(song2);
	std::cin >> song1;
	song1.print();
	
	return 0;
}
