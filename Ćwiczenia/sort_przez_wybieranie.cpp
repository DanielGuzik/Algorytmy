#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void wybieranie (int* tab, int n) 
{
	int i, j, k, x;
	
	for (i = 0; i < n; i++) {
		k = i;
		x = tab[i];
		
		for (j = i + 1; j < n; j++) {
			if (tab[j] < x) {
				k = j;
				x = tab[j];
			}
		}
		
		tab[k] = tab[i];
		tab[i] = x;
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
 
    wybieranie(tab, n);
 
    cout<<"\nTablica posortowana:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
	return 0;
}
