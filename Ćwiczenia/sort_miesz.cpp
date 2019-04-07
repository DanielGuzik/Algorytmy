#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mieszane (int* tab, int n) 
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
	int n = 20;
	int tab[n];
	
	srand (time(NULL));
	
	for (int i = 0; i < n; i++) 
		tab[i] = rand() % 100 + 1;
 
    cout<<"Tablica przed sortowaniem:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
 
    mieszane(tab, n);
 
    cout<<"\nTablica posortowana:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
	return 0;
}
