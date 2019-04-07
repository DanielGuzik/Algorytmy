#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int* sort_wstaw_polowkowe(int* tab, int n){
	int i,j,ip,ik;
	int x;
	
	for(j=n-2;j>=0;j--) {
		x=tab[j];
		ip=j;
		ik=n;
		while(ik-ip>1) {
			i=(ip+ik)/2;
			if(x<=tab[i])
				ik=i;
			else
				ip=i;
		}
	for(i=j;i<=ip;i++)
		tab[i]=tab[i+1];
	tab[ip]=x;
	}
	return tab;
}

int main() {
	int N;
    srand(time(NULL));
    
    cout << "Ile liczb chcesz posortowac: ";
    cin >> N;
    int tab[N];
    
    cout << "Tablica nieposortowana: "<<endl;
    for(int i=0;i<N;i++) {
	   	tab [i]=rand()%100;
	   	cout<< tab[i]<<" ";
    }
    
    sort_wstaw_polowkowe(tab,N);
    
	cout <<endl<<endl<<"Tablica posortowana przez wstawienie polowkowe: "<<endl;
    for(int i=0;i<N;i++) cout << tab[i] << " ";
    
    cout << endl<<endl;
    system("PAUSE");
}
