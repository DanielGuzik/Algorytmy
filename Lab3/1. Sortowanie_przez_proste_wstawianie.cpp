#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void sort_wstaw(int t[],int n) {
    for (int i=1; i<n; i++) {
        int v=t[i];
        int j=i;
        while(v<t[j-1] && j>0) {
            t[j] = t[j-1];
            j--;
        }
        t[j]=v;
    }
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
    
    sort_wstaw(tab,N);
    
	cout <<endl<<endl<<"Tablica posortowana przez wstawienie: "<<endl;
    for(int i=0;i<N;i++) cout << tab[i] << " ";
    
    cout << endl<<endl;
    system("PAUSE");
}
