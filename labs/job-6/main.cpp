#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct scan_info {
	char model[32];		// наименование модели
	int price;			// цена
	double x_size;		// горизонтальный размер области сканировани¤
	double y_size;		// вертикальный размер области сканировани¤
	int optr;			// оптическое разрешение
	int grey;			// число градаций серого
};

int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 1;

	scan_info scan[n];
	
	FILE *f;
	const char* OutFile = "file.txt";
	
	f = fopen(OutFile, "w");
	
	for(int i = 0; i < n; i++) {
		cout << "Модель сканера: ";
		cin >> scan[i].model;
		fprintf(f, "scan[%d].model = %s\n", i, scan[i].model);
		
		cout << "Стоимость сканера: ";
		cin >> scan[i].price;
		fprintf(f, "scan[%d].price = %d\n", i, scan[i].price);
		
		cout << "Горизонтный размер области сканера: ";
		cin >> scan[i].x_size;
		fprintf(f, "scan[%d].x_size = %f\n", i, scan[i].x_size);
		
		cout << "Вертикальный размер области сканировани¤: ";
		cin >> scan[i].y_size;
		fprintf(f, "scan[%d].y_size = %f\n", i, scan[i].y_size);
		
		cout << "Оптическое разрешение: ";
		cin >> scan[i].optr;
		fprintf(f, "scan[%d].optr = %d\n", i, scan[i].optr);
		
		cout << "Число градаций серого: ";
		cin >> scan[i].grey;
		fprintf(f, "scan[%d].grey = %d\n", i, scan[i].grey);
	}
	fclose(f);
	
	return 0;
}
