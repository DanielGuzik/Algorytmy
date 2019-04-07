#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int fib(int nr) {	
	if(nr==1 || nr==2)
		return 1;
	else
	 	return fib(nr-1)+fib(nr-2);
}

int main() {
	
	cout<<"Wynik: "<<fib(4);
	return(0);
}
