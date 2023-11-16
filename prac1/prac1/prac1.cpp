#include "Song.h"

#include <iostream>

int main()
{
	Song song1;
	Song song2(1,"Riptade", "jhon", "nature", "pop", "text...","Eng",2011,180);
	//Song song3(song2);
	std::cin >> song1;
	std::cout << std::endl;
	if (song1 == song2) {
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}
	std::cout << std::endl;
	std::cout << song1;
	std::cout << song2;
	
	return 0;
}
