#include "Song.h"
#include "Audiobook.h"
#include "Audio.h"
#include <iostream>

int main()
{
	Song song1;
	Song song2(1,"Riptade", "jhon", "nature", "pop", "text...","Eng",2011,180);

	Audiobook book1;
	Audiobook book2(2, "The Art of Programming", "Donald Knuth", "PublisherX", 2022, 3600, 29.99, "MP3");;
	Audio audio1;
	
	std::cout << book2;
	std::cout << song2;
	std::cin >> audio1;
	std::cout << audio1;
	

	return 0;
}
