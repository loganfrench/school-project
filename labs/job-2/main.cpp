#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
 
#define SIZE 6
 
int main ()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int num[SIZE];
	double sumPlus = 1; // �����
	double sumMinus = 0; // �����
	int j = 0;
	int m[SIZE];
 
	for(int i = 0; i < SIZE; i++) {
		num[i] = -5 + rand() % 15;
		cout << num[i] << "	";
	}
	cout << endl;
	
	for(int i = 0; i < SIZE; i++) {
		if(num[i] < 0) sumMinus += num[i];
 	}
	cout << "����� ������������� = " << sumMinus << endl;	
	
	int min = 0, max = 0;
	
	for(int i = 0; i < SIZE; i++) {
		if(num[i] < num[min]) min = i;
		if(num[i] > num[max]) max = i;
	}
	
	if(min > max) {
		int temp = min;
		min = max;
		max = temp;
	}

	for(int i = min+1; i < max; i++) {
		sumPlus *= num[i];
	}
		
	cout << " ������������ ����� max � min = " << sumPlus << endl;
	return 0;
}
