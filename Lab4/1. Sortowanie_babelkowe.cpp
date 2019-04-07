#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void sort_babelkowe(int* tab, int n) {
	int i, j, x;
	
	for (i = 0; i < n; i++) {
		for (j = n; j > i; j--) {
			if(tab[j - 1] > tab[j]) {
				x = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = x;
			}
		}
	}
}

int main()
{
	int N;
    srand(time(NULL));
    
    cout << "Ile liczb chcesz posortowac: ";
    cin >> N;
    int tab[N];
    
    cout << "Tablica nieposortowana: "<<endl;
    for(int i=0;i<N;i++)
	    {
	    	tab [i]=rand()%100;
	    	cout<< tab[i]<<" ";
	    }
    
    sort_babelkowe(tab,N);
    
	cout <<endl<<endl<<"Tablica posortowana babelkowo: "<<endl;
    for(int i=0;i<N;i++) cout << tab[i] << " ";
    
    cout << endl<<endl;
    system("PAUSE");
}
