#include <iostream>

using namespace std;

const int ft = 12;

int main() 
{
	setlocale(LC_ALL,"Russian");
	int growth;
	cout << "Введите рост: ___\b\b\b";
	cin >> growth;
	cout << "Ваш рост: " << growth / ft << " фут(ов) и " << (growth % ft) << " дюйм(ов)" << endl;
	return 0;
}
