#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
class Stack {
private:
	T *stack;
	int size;
	T top;
public:
	Stack(int = 10);
	~Stack();
	bool push(const T);
	bool pop();
	void printStack();
};

template <typename T>
Stack<T>::Stack(int s) {
	size = s > 0 ? s: 10;
	stack = new T[size];
	top = -1;
}

template <typename T>
Stack<T>::~Stack() {
	delete [] stack;
}

template <typename T>
bool Stack<T>::push(const T value) {
	if(top == size -1) return false;
	
	top++;
	stack[top] = value;
	
	return true;
}

template <typename T>
bool Stack<T>::pop() {
	if (top == -1) return false;
	
	stack[top] = 0;
	top--;
	
	return true;
}
 
template <typename T>
void Stack<T>::printStack() {
	for (int ix = size -1; ix >= 0; ix--) cout << "|" << setw(4) << stack[ix] << endl;
}

int main() {
	Stack <int> myStack(5);


	myStack.push(0);
	myStack.push(5);
	myStack.push(10);
	myStack.push(15);
	myStack.push(20);
	
	
	myStack.printStack();
	
	myStack.pop();
	myStack.pop();
	myStack.printStack();
	
	return 0;
}
