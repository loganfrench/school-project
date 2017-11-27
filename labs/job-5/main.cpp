#include <iostream>
#include <string>

using namespace std; 

struct STUDENT { 
	string family; 
	int group; 
	float rat[5]; 
};

int main() 
{   
	setlocale(LC_ALL, "Russian");
	const int SIZE = 10;
	STUDENT stud[SIZE];
	int goodStud = 0;
	
	for (int i = 0; i < SIZE; i++){
		cout << "Введите фамилию студента: ";
		cin >> stud[i].family;
		cout << "Введите номер группы: ";
		cin >> stud[i].group;
		cout << "Введите 5 оценок: " << endl;
		for (int j = 0; j < 5; j++) cin >> stud[i].rat[j];
		cout << endl;
	}
	
	double sum = 0;
	for (int i = 0; i < SIZE; i++) {
		
		for (int j = 0; j < 5; j++) sum += stud[i].rat[j];
		
		double score = sum / 5;
		
		if(score > 4.0) {
			cout << "Фамилия студента: " << stud[i].family << endl;
			cout << "Группа: " << stud[i].group << endl;
			cout << "Балл: " << score << endl;
			goodStud++;
			cout << endl;
		}
		sum = 0;
	}
	if(!goodStud) cout << "Нет студентов со средним баллом больше 4.0" << endl;
	
	return 0;
}
