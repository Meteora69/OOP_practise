#include "Song.h"
#include "Audiobook.h"
#include <iostream>

int main()
{
	Song song1;
	Song song2(1,"Riptade", "jhon", "nature", "pop", "text...","Eng",2011,180);
	Audiobook book1;
	std::cout << book1;
	return 0;
}
