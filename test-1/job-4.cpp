#include <iostream>

using namespace std;

double transferFahr(float cels) {
	return 1.8*cels+32.0;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL,"Russian");

	float temp;
	cout << "Введите теспературу градусов Цельсия" << endl;
	cin >> temp;
	cout << temp << " градусов Цельсия равняется " << transferFahr(temp) << " градусов Фаренгейта" << endl;

	return 0;
}
