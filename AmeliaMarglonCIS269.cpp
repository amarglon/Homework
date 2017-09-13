// AmeliaMarglonCIS269.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main(){
	const int size = 9;
	int countArray(int* p,int size);
	void removeOdd(int* p, int size);
	int intArray[size] = { 1,2,3,4,5,6,7,8,9}; //integer array with size 9
	int* p = intArray;
	int add = countArray(p,size);
	removeOdd(p, size);
	cout << add << endl;  //print the sum of the array
	for (int i = 0; i < size; i++) {
		cout << intArray[i] << ' ' << endl; // print the array
	}

	return 0;
}
int countArray(int* p, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(p + i);
	}
	return sum;
}
void removeOdd(int* p, int size) {
	for (int i = 0; i < size; i++) {
		if ((*(p + i) % 2) != 0) {
			*(p + i) = NULL;
		}
	}
	
}
