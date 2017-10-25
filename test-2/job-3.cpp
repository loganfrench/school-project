#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	setlocale(LC_ALL,"Russian");
	float km, liter; 
	cout << "Введите расстояние (в километрах): ";
    cin >> km;
    cout << "Введите расход топлива (в литрах): ";
    cin >> liter;
    cout << "Расход топлива на 100 километров: " << (liter*100) / km << endl;
	return 0;
}
