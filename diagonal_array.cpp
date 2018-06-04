
#include "stdafx.h"
#include <iostream>
using namespace std;
void fillArray(int **arr, int size);
void showarr(int **arr, int size);
int main_diagonal(int **arr, int size);
int support_diagonal(int **arr, int size);
bool result_in(int resultat1,int  resultat2);

int main()
{
	int size;
	cout << "enter matrix size" << endl;
	cin >> size;
	int **arr1 = new int*[size];
	int **arr2 = new int*[size];
	
	fillArray(arr1,size);
	fillArray(arr2, size);
	showarr(arr1, size);
	cout << "_____" << endl;
	showarr(arr2, size);
	int diagonal1= main_diagonal(arr1,size);
	int diagonall1 = support_diagonal(arr1, size);
	int resultat1 = diagonal1 + diagonall1;
	cout << resultat1 << endl;
	int diagonal2 = main_diagonal(arr2, size);
	int diagonall2 = support_diagonal(arr2, size);
	int resultat2 = diagonal2 + diagonall2;
	cout << resultat2 << endl;
	int booll= result_in(resultat1, resultat2);
	if (booll) {
		cout << "arajin zangvaci glxavor ankyunagci ev ojandak ankyunagci gumar@ mec e erkrord zangvacinic " << endl;
	 }else{
		cout << "erkrord@ mec e arajinic " << endl;
	}
	
	
}


void fillArray(int **arr,int size) {

	for (int i = 0; i < size; ++i) {
		arr[i] = new int[size];
	}
	for (int i = 0; i < size; ++i) {
		
		for (int j = 0; j < size; ++j) {
	
			cin >> arr[i][j];
		}
	}

}

void showarr(int **arr,int size) {

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int main_diagonal(int **arr, int size) {
	int tmp = 0;
	for (int i = 0; i < size; ++i) {
		tmp += arr[i][i];
	}
	return tmp;
}
int support_diagonal(int **arr, int size) {
	int ptr = 0;
	for (int i = 0, j = size - 1; i < size, j >= 0; ++i, --j) {
		ptr = ptr + arr[i][j];
	}
	return ptr;
	
}
bool result_in(int resultat1,int resultat2) {
	if (resultat1 > resultat2) {
		return true;
	}
	return false;

}






