#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void sort_mieszane(int* tab, int n) 
{
	int j, k, l, p, x;
	l = 0;
	p = n;
	k = n;
	
	do {
		for (j = p; j >= l; j--) {
			if (tab[j - 1] > tab[j]) {
				x = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = x;
				k = j;
			}
		}
		l = k + 1;
		for (j = l; j < p; j++) {
			if (tab[j - 1] > tab[j]) {
				x = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = x;
				k = j;
			}
		}
		p = k - 1;
	} while (l <= p);
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
    
    sort_mieszane(tab,N);
    
	cout <<endl<<endl<<"Tablica posortowana Sortowaniem mieszanym: "<<endl;
    for(int i=0;i<N;i++) cout << tab[i] << " ";
    
    cout << endl<<endl;
    system("PAUSE");
}
