#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int silnia(int n) {
	if (n==0) return 1;
	else return n*silnia(n-1);
}

int main()
{
	int s;
	cout << "Program oblicza silnie z dowolnej liczby"<<endl;;
	
	cout << "Podaj liczbe: "; cin >> s;
	
	cout << s <<"! = " << silnia(s);

	return(0);
}
