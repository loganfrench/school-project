#include <iostream> 
#include <stdlib.h> 
#include <locale> 
#include <conio.h> 
#include <time.h> 

using namespace std; 
 
int main() 
{ 
	setlocale(LC_ALL,"Russian"); 
	int n, m;
		
	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите количество столбцов: ";
	cin >> m;
	
	int **matr = new int* [n]; 
	for(int i = 0; i < n; i++) matr[i] = new int [m];
	
	srand(time(NULL));
	for(int i = 0; i<n; i++ ) {
		for(int j = 0; j<m; j++) {
			matr[i][j] = -50 + rand() % 100;
		}
	}

	for(int i = 0; i < n; i++ ) { 
		cout << " Строка " <<i+1 <<" -"; 
		for(int j = 0; j<m; j++) {
			if(j == m-1) {
				cout << matr[i][j] << endl; 
				break; 
			}
			else cout << matr[i][j] << ", "; 
		}
	}
	cout << endl; 
	
	int count = 0;
	int* maxNumbers = new int [n*m];
	bool found = 0; 
	for(int i = 0; i < n*m; i++) maxNumbers[i] = 0;
	for(int i = 0, k = 0; i < n; i++, found = 0)
	{ 
		for(int j = 0; j < m; j++)  {
			if(!matr[i][j]) found = true;
			else {
				maxNumbers[k] = matr[i][j]; 
				k++; 
			}
		}
		if(!found) count++;
	} 
	cout << "Количество строк без нулевых элементов " << count << endl; 
	
	for(int i = 0; i < n*m; i++) {
		for(int j = 0; j < n*m; j++) {
			if(maxNumbers[i] < maxNumbers[j]) swap(maxNumbers[i],maxNumbers[j]);  
		}
	}
	
	for(int i = n*m-1; i >= 0; i--) {
		if(maxNumbers[i] == maxNumbers[i-1]) {
			cout << "Максимально число встречающееся в массиве больше одного раза: " << maxNumbers[i] << endl; 
			break; 
		} 
	} 
	
	// Освобождение памяти 
	delete []maxNumbers; // Освобождение памяти от массива всех чисел 
	for(int i = 0; i < n; i++) delete []matr[i]; // Освобождение памяти по столбцам 
	delete []matr; // Освобождение памяти по строкам 
	return 0;
} 
