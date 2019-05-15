#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node {
	int value;
	Node *next;
};

class Stack {
	Node *last;
public:
	Stack()
		: last(NULL){};
	~Stack();

	void push(int value);
	void pop();

	void print();

};

void Stack::push(int value) {
	Node *temp = new Node;
	temp->value = value;
	temp->next = last;
	last = temp;
}

void Stack::pop() {
	if (!last) return;

	int value = last->value;

	Node *temp = last;
	last = last->next;

	delete temp;

	cout << "ELEMENT '" << value << "' REMOVE" << endl;
}

void Stack::print() {
	Node* temp = last;

	cout << "[ ";
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}

	cout << "]" << endl;
}
 
Stack::~Stack() {
	while (last) {
		Node *temp = last;
		last = last->next;
		delete temp;
	}
 
}

int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.print();
	s.pop();
	s.print();

	system("pause");

	/*
		Output:
			[ 30 20 10 ]
			ELEMENT '30' REMOVE
			[ 20 10 ]
	*/
}