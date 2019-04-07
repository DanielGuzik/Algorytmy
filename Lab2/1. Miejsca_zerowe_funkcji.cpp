#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	double a,b,c;
	double delta,x1,x2;
		
	cout << "Podaj wspolczynnik a: "; cin >> a;
	cout << "Podaj wspolczynnik b: "; cin >> b;
	cout << "Podaj wspolczynnik c: "; cin >> c;
	
	cout<<"Podales:\na = "<<a<<"\nb = "<<b<<"\nc = "<<c<<endl;
	
	if(a==0)
		cout<<"To nie jest funkcja kwadratowa";
	else {
		delta = b * b - 4 * a * c;
		cout<<"Delta = "<<delta<<endl;
		if(delta < 0)
			cout<<"Brak miejsc zerowych"<<endl;
		else if(delta > 0) {
			x1= ((-b)-sqrt(delta))/(2*a);
			x2= ((-b)+sqrt(delta))/(2*a);
			cout<<"x1 = "<<x1<<endl;
			cout<<"x2 = "<<x2<<endl;
		}
		else if(delta == 0) {
			x1=(-b)/(2*a);
			cout<<"x1 = "<<x1<<endl;
		}
	}
	return(0);
}
