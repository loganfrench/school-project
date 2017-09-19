#include <iostream>

using namespace std;

void firstFunction()
{
	cout << "First line " << endl;
}
void secondFunction()
{
	cout << "Second line" << endl;
}

int main(int argc, char** argv) 
{
	firstFunction();
	firstFunction();
	secondFunction();
	secondFunction();
	return 0;
}
