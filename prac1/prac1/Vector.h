#pragma once
#include <iostream>
#include <algorithm>
template<typename T>
class Vector
{
	T* array = new T[10];
	int size;
	int capacity;
	public:
		Vector() : size(0), capacity(10) {}
		int getSize() {
			return size;
		}
		int getCapasity() {
			return capacity;
		}
		void push_back(T element) {
			if (size == capacity) {
				T* newArray = new T[capacity++];
				for (int i = 0; i < size; i++) {
					newArray[i] = array[i];
				}

				delete[] array;

				array = newArray;
				capacity++;
			}

			array[size++] = element;
		}
		void pop_back() {
			if (size > 0) {
				array[size] = T();
				size--;
			}

		}
		T at(int index) {
			if (index >= 0 && index < size) {
				return array[index];
			}
		}
		T operator[](int index) {
			return at(index);
		}
		void arrPrint() {
			for (int i = 0; i < size; i++) {
				std::cout << array[i]<<" ";
			}
			std::cout << std::endl;
		}
		~Vector() {
			delete[] array;
		}
};




