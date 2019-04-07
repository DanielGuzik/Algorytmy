#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void sort_proste_wybieranie(int* tab, int n) {
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
    
    sort_proste_wybieranie(tab,N);
    
	cout <<endl<<endl<<"Tablica sortowana przez wybieranie: "<<endl;
    for(int i=0;i<N;i++) cout << tab[i] << " ";
    
    cout << endl<<endl;
    system("PAUSE");
}
