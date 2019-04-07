#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void babelkowe (int* tab, int n) 
{
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

	int n = 20;
	int tab[n];
	srand (time(NULL));
	
	for (int i = 0; i < n; i++) 
		tab[i] = rand() % 100 + 1;
 
    cout<<"Tablica przed sortowaniem:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
 
    babelkowe(tab, n);
 
    cout<<"\nTablica posortowana:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
	return 0;
}
