#include <iostream>
#include <cmath>

using namespace std;

const int ft = 12;
const float meter = 0.0254;
const float kg = 2.2;

int main() 
{
	setlocale(LC_ALL,"Russian");
	int growthFoot, growthInch, weightPounds; // ���� � �����, ���� � ������, ��� � ������
	cout << "������� ��� ���� � �����: _\b";
    cin >> growthFoot;
    cout << "������� ��� ���� � ������: __\b\b";
    cin >> growthInch;
    cout << "������� ��� ��� � ������: __\b\b";
    cin >> weightPounds;
    cout << "��� ������ ����� ���� (���): " << pow((growthFoot * ft + growthInch)*meter, 2) / (weightPounds / kg) << endl;
	return 0;
}
