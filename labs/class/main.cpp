#include <iostream>
#define arraySize(arr)  (sizeof arr / sizeof arr[0])

using namespace std;

class Students {
private:
	string student[123]; // 0 - name; 1 - rating
	int studentRating[123][123];
	int count;
public:
	Students(string name) {
		this->count = 0;
	}
	int setStudent(string name) {
		this->student[count++] = name;
		return count - 1;
	}
	void setRating(int id, int rating[]) {
		for(int i = 0; i < 5; i++) {	
			this->studentRating[id][i] = rating[i];
		}
	}
	float getBall(int id) {
		float ball = 0, countRating = 0;
		for(int i = 0; i < sizeof(this->studentRating); i++) {
			if(i == id) {
				countRating = 5;
				for(int j = 0; j < countRating; j++) {
					ball += this->studentRating[i][j];
				}
				break;
			}
		}
		return ball/countRating;
	}
	void print() {
		for(int i = 0; i < this->count; i++) {
			cout << (i+1) << ". " << student[i] << ". Ball: " << getBall(i) << endl;
		}
	}
	
	~Students() {
		cout << "clean memory" << endl;
	};
	
	friend void setRating(int, int);
};

int main() {
	Students w("aasd");

	int id = w.setStudent("Petya");
	int rating[] = {5, 5, 5, 5, 5};
	w.setRating(id, rating);

	w.print();

		
	return 0;
}
