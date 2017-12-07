#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	ifstream f("file.dat");
    char text[512];
    
    while (!f.eof()) {
	    f.getline(text, sizeof(text));
	    cout << text << endl;
    }
    f.close();
    
    int c = 0, start = 0, dot = 0;
    for(int i = 0; i < strlen(text); i++) {
    	if(text[i] == '.' || text[i] == '!' || text[i] == '?') {
			c++;
			dot = i+2;
			for(int j = start; j < dot; j++) {
				cout << text[j];
				start = j+1;
			}
			cout << endl;
			system("pause");
		}
	}
    cout << "Предложений в тексте: " << c;
	return 0;
}

