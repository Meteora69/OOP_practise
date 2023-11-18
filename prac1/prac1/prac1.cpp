#include "Song.h"
#include "Audiobook.h"
#include "Audio.h"
#include <iostream>
using namespace std;
int main()
{
	const int arrLong = 3;
	Audio* audioList[arrLong];
	int choice;
	for (int i = 0; i < arrLong; i++) {

		cout << "======== Menu ========" << endl;
		cout << "1. Class Audio" << endl;
		cout << "2.  Class Audiobook" << endl;
		cout << "3. Class Song" << endl;
		
		cout << "======================" << endl;
		cout << "Chose option: ";
		cin >> choice;

		switch (choice) {
		case 1:
			audioList[i] = new Audio;
			break;
		case 2:
			audioList[i] = new Audiobook;
			
			break;
		case 3:
			audioList[i] = new Song;
			
			break;
		default:
			cout << "Eror.Try again ." << endl;
			i--;
		}
	   audioList[i]->input();
	}
	for (int i = 0; i < arrLong; i++) {
		cout << *audioList[i];
	}
	for (int i = 0; i < arrLong; i++) {
		audioList[i]->printMessage();
		delete audioList[i];
	}
	

	return 0;
}
