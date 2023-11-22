#include "Song.h"
#include "Audiobook.h"
#include "Audio.h"
#include "Vector.h"
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
using namespace std;
template <typename T>
void printList(const list<T> &list) {
	for (auto i = list.cbegin(); i != list.cend(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}
int main() {
	srand(time(NULL));
	list<int> list1 = { 11, 15, 21, 27, 33, 39, 45, 51, 57, 63 };
	list<int> list2;
	for (int i = 0; i < 10;  i++) {
		unsigned int randNum = rand() % 100;
		if (randNum % 2 == 0) {
			list2.push_back(randNum);
		}
		else {
			i--;
		}
	}
	list<int>  list3;
	list1.sort();
	list2.sort();
	
	std::merge(list1.begin(), list1.end(), list2.begin(), list2.end(), std::back_inserter(list3));

	printList(list1);
	printList(list2);
	printList(list3);

	map<int, Audio*> objectMap;
	int choice, foundId, id=1;



	do {
		Audio* newObj = nullptr;
		
		cout << "======== Menu ========" << endl;
		cout << "1. Class Audiobook" << endl;
		cout << "2. Class Song" << endl;
		cout << "2. Output data" << endl;
		cout << "4. Leave" << endl;
		cout << "======================" << endl;
		cout << "Chose option: ";
		cin >> choice;
		switch (choice) {
		case 1:
			newObj = new Audiobook;
			newObj->setId(id);
			objectMap[id] = newObj;
			id++;
			break;
		case 2:
			newObj = new Song;
			newObj->setId(id);
			objectMap[id] = newObj;
			id++;
			break;
		case 3:
			 
			cin >> foundId;
			for (const auto& pair : objectMap) {
				if (foundId == pair.first) {
					pair.second->print();
				}
				else {
					std::cout << "Object not found!" << std::endl;
				}
			}
			break;
		default:
			cout << "Eror.Try again ." << endl;

		}

	} while (choice != 3);

	return 0;
}


