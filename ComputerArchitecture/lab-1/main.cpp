#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

class Queue {
    Node *first, *last;
public:
    Queue()
        : first(NULL)
        , last(NULL){};
    ~Queue();

    void push(int value);
	void remove();
    void print();
};

Queue::~Queue() {
    Node* temp = first;

    while (temp != NULL) {
        temp = first->next;
        delete first;

        first = temp;
    }
}

void Queue::push(int value) {
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

void Queue::print() {
    Node* temp = first;
	
	cout << "[ ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "]" << endl;
}

void Queue::remove() {
    if (first != NULL) {
        Node* temp = first;

        cout << "ELEMENT '" << first->value << "' REMOVE" << endl;
        first = first->next;

        delete temp;
    }
}


void main() {
    Queue q;

	q.push(10);
	q.push(20);
	q.push(30);

	q.print();

	q.remove();

	q.print();

	system("pause");
}