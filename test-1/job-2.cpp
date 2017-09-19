#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	setlocale(LC_ALL,"Russian");
	int far;
	cout << "Введите расстояние в фарлогнах" << endl;
	cin >> far;
	cout << far << " фарлонгов - " << far*220 << "ярд" << endl;
	return 0;
}
