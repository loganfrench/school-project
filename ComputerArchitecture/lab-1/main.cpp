#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node {
	int value;
	Node* next;
};

class List {
	Node *first, *last;
public:
	List()
		: first(NULL)
		, last(NULL){};
	~List();

	void push(int value);
	void remove(int elem);
	int search(int elem);
	int size();
	void print();
};

List::~List() {
	Node* temp = first;

	while (temp != NULL) {
		temp = first->next;
		delete first;

		first = temp;
	}
}

void List::push(int value) {
	Node* temp = new Node;
	temp->value = value;
	temp->next = NULL;

	if (first != NULL) {
		last->next = temp;
		last = temp;
	}
	else 
		first = last = temp;
}

void List::print() {
	Node* temp = first;

	cout << "[ ";
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << "]" << endl;
}

void List::remove(int elem) {
	if ((first != NULL) && (elem < size()) && (elem >= 0)) {
		Node *temp = first, *h = first;

		for (int i = 0; i < elem; i++) {
			h = temp;
			temp = temp->next;
		}

		if (temp == first) 
			first = temp->next;
		else
			h->next = temp->next;

		cout << "ELEMENT '" << temp->value << "' REMOVE"<< endl;

		delete temp;
	}
}

int List::search(int elem) {
	Node *temp = first;

	for (int i = 0; i < elem; i++) {
		temp = temp->next;
	}

	return temp->value;
}

int List::size() {
	int size = 0;

	Node* temp = first;

	while (temp != NULL) {
		temp = temp->next;
		size++;
	}

	return size;
}

void main() {
	List l;

	l.push(10);
	l.push(20);
	l.push(30);

	l.print();

	cout << "SIZE: " << l.size() << endl;

	l.remove(1);

	cout << "SIZE: " << l.size() << endl;

	l.print();

	cout << "LIST[1]: " << l.search(1) << endl;

	system("pause");

	/*
	Output: 
		[ 10 20 30 ]
		SIZE: 3
		ELEMENT '20' REMOVE
		SIZE: 2
		[ 10 30 ]
		LIST[1]: 30
	*/
}