
#include"stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void reverse(int *arr, int length);
int main() {

	int array_numbers[5] = { 10,20,30,40,50 };

	reverse(array_numbers, 5);
	for (int i = 0; i < 5; i++) {
		cout << array_numbers[i] << endl;

	}

	cin.get();
}

void reverse(int *arr, int length) {

	int *arrr = new int[length];

	for (int i = 0; i < length; i++) {
		arrr[i] = arr[i];
	}

	for (int i = 0; i < length; i++) {
		arr[i] = arrr[(length - 1) - i];
	}
}





