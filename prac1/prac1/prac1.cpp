#include "Song.h"
#include "Audiobook.h"
#include "Audio.h"
#include "Vector.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main() {
	srand(time(NULL));
	vector<int> vec1 = { 11, 15, 21, 27, 33, 39, 45, 51, 57, 63 };
	vector<int> vec2;
	for (int i = 0; i < 10; i++) {
		unsigned int randNum = rand() % 100;
		if (randNum % 2 == 0) {
			vec2.push_back(randNum);
		}
		else {
			i--;
		}
	}
	vector<int> vec3;
	std::sort(vec1.begin(), vec1.end());
	std::sort(vec2.begin(), vec2.end());
	std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(vec3));

	for (int num : vec1) {
		cout << num << " ";
	}
	cout << endl;
	for (int num : vec2) {
		cout << num << " ";

	}
	cout << endl;
	for (int num : vec3) {
		cout << num << " ";
	}

	vector<Audio*> objecVector1;
	int choice;
	do {

		cout << "======== Menu ========" << endl;
		cout << "1. Class Audiobook" << endl;
		cout << "2. Class Song" << endl;
		cout << "3. Leave" << endl;
		cout << "======================" << endl;
		cout << "Chose option: ";
		cin >> choice;
		switch (choice) {
		case 1:
			objecVector1.push_back(new Audiobook);
			break;
		case 2:
			objecVector1.push_back(new Song);
			break;

		default:
			cout << "Eror.Try again ." << endl;

		}

	} while (choice != 3);
	vector<Audio*> objecVector2 = objecVector1;
	for (int i = 0; i < objecVector1.size(); i++) {
		if (dynamic_cast<Song*>(objecVector1[i])) {
			objecVector1.erase(objecVector1.begin() + i);
		}
	}
	cout << "Vector 1 :";
	for (int i = 0; i < objecVector1.size(); i++) {
		objecVector1[i]->printMessage();
	}
	for (int i = 0; i < objecVector2.size(); i++) {
		if (dynamic_cast<Audiobook*>(objecVector2[i])) {
			objecVector2.erase(objecVector2.begin() + i);
		}
	}
	cout << endl << "Vector 2 :";
	for (int i = 0; i < objecVector2.size(); i++) {
		objecVector2[i]->printMessage();
	}
	return 0;
}


