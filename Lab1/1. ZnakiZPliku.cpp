#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char FileName[] = "plik.txt";

int main () {
	string line;
	ifstream inMyStream (FileName); 
	int c=0;
	
	if (inMyStream.is_open()) {
	    while(  getline (inMyStream, line)) {
	    	c += line.length();
	  	}
	}
	inMyStream.close(); 
	cout << c << endl;
	
	system("pause");
	return 0;
}
