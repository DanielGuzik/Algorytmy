#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N = 15; 

int main()
{
	int d[N],h,i,j,x;
	  
	srand((unsigned)time(NULL));
	
	cout << "Tablica przed sortowaniem: \n";
	for(i=0; i<N; i++) 
		d[i] = rand() % 100;
 	for(i=0; i<N; i++) cout << setw(4) << d[i];
		cout << endl;
	
	for(h = 1; h < N; h = 3 * h + 1);
		h /= 9;
	if(!h) 
		h++; 
	
	while(h) {
	    for(j = N - h - 1; j >= 0; j--) {
	    	x = d[j];
	      	i = j + h;
	      	while((i < N) && (x > d[i])) {
	        	d[i - h] = d[i];
	        	i += h;
	      	}
	      	d[i - h] = x;
	    }
	    h /= 3;
	}	
	cout << "\nPo sortowaniu:\n";
	for(i = 0; i < N; i++) cout << setw(4) << d[i];
	
	cout << endl;
	return 0;
} 
