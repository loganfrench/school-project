#include <iostream>

using namespace std;

class Students {
private:
	string student, lastName;
	float averageBall;
public:
	Students() {
		this->student = "Ahmed";
		this->averageBall = 4.4;
	}
	
	Students(string name, float ball) {
		this->student = name;
		this->averageBall = ball;
	}
	
	Students(Students &s) {
		this->student = s.student;
		this->averageBall = s.averageBall;
	}
	
	void setLastName(string name) {
		this->lastName = name;
	}
	
	void operator+(string lastName) {
        student += lastName;
    }
    
    void printFullName() {
    	cout << student << " " << lastName << endl;
	}
	
	float getBall() {
		return this->averageBall;
	}
	
	void printBall() {
		cout << this->averageBall << endl;
	}
	
	~Students() {
		cout << "clean memory" << endl;
	};
	friend void setStudent(Students &, string, float);
};

void setStudent(Students &s, string name, float ball) {
	s.student = name;
	s.averageBall = ball;
}

int main() {
	Students Ahmed;

	Ahmed.setLastName("Maga");
	Ahmed.printFullName();

	Students Arsen("Arsen", 4);
	Students Ashot(Ahmed);

	Ahmed.printBall();
	Arsen.printBall();
	Ashot.printBall();
		
	return 0;
}
