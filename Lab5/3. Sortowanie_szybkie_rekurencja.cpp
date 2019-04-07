#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
void Sortowanie(int *tablica, int lewy, int prawy) {
    int v=tablica[(lewy+prawy)/2]; 
    int p=lewy;
    int q=prawy;
    do {
        while (tablica[p]<v) p++;                  
        while (tablica[q]>v) q--;
        if (p<=q) {
            swap (tablica[p],tablica[q]);
            p++;
            q--;
        }
    }while (p<=q);
    if (q>lewy) Sortowanie(tablica,lewy,q);         
    if (p<prawy) Sortowanie(tablica,p,prawy);
}

int main()
{
	int n = 20;
	int tab[n];
	srand (time(NULL));		
		
    cout<<"Tablica przed sortowaniem:\n";
    for(int i=0; i<n; i++) {
    	tab[i] = rand() % 100 + 1;
        cout<<tab[i]<<" ";
	}
    Sortowanie(tab,0,20);
    
    cout<<"\n\nTablica po sortowaniu:\n";
    for(int i=0; i<n; i++)
            cout<<tab[i]<<" ";
}
