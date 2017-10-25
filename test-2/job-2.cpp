#include <iostream>
#include <cmath>

using namespace std;

const int ft = 12;
const float meter = 0.0254;
const float kg = 2.2;

int main() 
{
	setlocale(LC_ALL,"Russian");
	int growthFoot, growthInch, weightPounds; // рост в футах, рофт в дюймах, вес в фунтах
	cout << "Введите Ваш рост в футах: _\b";
    cin >> growthFoot;
    cout << "Введите Ваш рост в дюймах: __\b\b";
    cin >> growthInch;
    cout << "Введите Ваш вес с фунтах: __\b\b";
    cin >> weightPounds;
    cout << "Ваш индекс массы тела (ИМТ): " << pow((growthFoot * ft + growthInch)*meter, 2) / (weightPounds / kg) << endl;
	return 0;
}
