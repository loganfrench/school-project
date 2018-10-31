#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

struct table {
	int id;
	string from;
	string to;
	string date;
	int duration;
};

vector<table> base;
int add(string from, string to, string date, int duration) {
	int id = rand() % 99999;
	base.push_back({
		id,
		from,
		to,
		date,
		duration
	});
	return id;
}

bool remove(int id) {
	for (int i = 0; i < base.size(); i++) {
		if(base[i].id == id) {
			base.erase(base.begin() + i);
			return true;
		}
	}
	return false;
}

void print() {
	cout << "ID\t\tFROM\t\tTO\t\tDATE\t\tDURATION\n" << endl;
	for (int i = 0; i < base.size(); i++) {
		cout <<
			base[i].id << "\t\t" <<
			base[i].from << "\t\t" <<
			base[i].to << "\t\t" <<
			base[i].date << "\t\t" <<
			base[i].duration << "\t\t" <<
		endl;
	}
}

int main() {
	srand(time(NULL));

	int one = add("Vasya", "Petya", "5.10.18 10:10:10", 100);
	int two = add("Vova", "Masha", "5.08.18 10:10:10", 9234982);
	int three = add("Artem", "Denis", "5.09.18 10:10:10", 23432);

	remove(one);

	print();

	return 0;
}