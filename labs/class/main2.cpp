#include <iostream>

using namespace std;

class admin {
protected:
	string student;
public:
	void setStudent(string name) {
		this->student = name;
	}
};

class Students : public admin {
public:
	void printStudent() {
		cout << student << endl;
	}
};


void infoStudent(int rating[]) {
	class Ball {
	private:
		int rating[];
	public:
		Ball(int* rating) {
			for (int i = 0; i < 5; i++) this->rating[i] = rating[i];
		} 
		float get() {
			int sum = 0;
			for(int i = 0; i < 5; i++) {
				sum += rating[i];
			}
			return sum / 5;
		}
	};
	
	Ball s(rating);
	cout << s.get() << endl;	
	return;
}

int main() {
	//
	Students s;
	s.setStudent("Vasya");
	s.printStudent();
	//
	
	int rating[] = {5, 5, 5, 5, 5};
	infoStudent(rating);
	return 0;
}
