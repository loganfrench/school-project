#include <iostream>
#include <ctime> 
#include <cstring>
#include <cstdlib>

using namespace std;

struct bus_info {
	char number[10];		// номер автобуса
	char family[32]; 		// водитель
	int route;				// маршурут
	int status;				// 0 = в парке; 1 = на выезде
};

#define SIZE 2

int main() {
	bus_info bus[SIZE];
	
	int sym;
	
	cout << "1 - Добавить\n2 - Отправить в рейс\n3 - Вернуть в парк\n4 - Список\n5 - Выход" << endl;
	
	int s = true;
	
	while(s) {
		cin >> sym;
		switch(sym) {
			case 1: {
				for(int i = 0; i < SIZE; i++) {
					cout << " - Введите номер автобуса: ";
					cin >> bus[i].number;
					cout << " - Введите фамилию водилы: ";
					cin >> bus[i].family;	
					cout << " - Введите номер маршрута: ";
					cin >> bus[i].route;
					cout << endl;
					bus[i].status = 0;
				}
				break;
			}
			case 2: {
				cout << " - Введите номер рейса: "; 
				int route;
				cin >> route;
				for(int i = 0; i < SIZE; i++) {
					if(bus[i].route == route) {
						bus[i].status = 1;
						cout << bus[i].family << " сел в маршрутку #" << bus[i].number << " и отправился в рейс #" << bus[i].route << endl;
						break;
					}
				}
				break;
			}
			case 3: {
				cout << " - Введите номер рейса: ";
				int route;
				cin >> route;
				for(int i = 0; i < SIZE; i++) {
					if(bus[i].route == route) {
						bus[i].status = 0;
						cout << bus[i].family << " вышел из маршуртки #" << bus[i].number << endl;
						break;
					}
				}
				break;
			}
			case 4: {
				cout << " Номер автобуса | Водила | Рейс | Статус" << endl;

				for(int i = 0; i < SIZE; i++) {
					string buff;
					
					if(bus[i].status == 0) buff = "В парке";
					else buff = "В рейсе";
					
					cout << " " << bus[i].number << " | " << bus[i].family << " | " << bus[i].route << " | " << buff << endl; 
				}
				break;
			}
			case 5: {
				s = false;
				break;
			}
			default: { 
				cout << "Неверное значение" << endl;
				break;
			}
		}
	}

	return 0;
}
