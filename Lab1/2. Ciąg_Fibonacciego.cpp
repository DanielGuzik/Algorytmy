#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main() {
	long int a,b,c;
	int i,liczba;
	
	cout<<"Podaj liczbe z ciagu Fibonacciego: ";
	cin>>liczba;
	a = 1;
	b = 1;
	
	if(liczba<=2) {	
		cout<<"wynik"<<a<<endl;
	} else {
		for(i=3;i<=liczba;i++) {
			c=a+b;
			a=b;
			b=c;
		}
		cout<<"Wynik: "<<c<<endl;
	}
	return(0);
}
