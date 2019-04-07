#include<iostream>
#include<conio.h>
using namespace std;
 
template <class Typ> Typ Sortowanie( Typ tab[])
{
	for(int i=0;i<6;i++)
    	for(int j=1;j<6-i;j++)
    		if(tab[j-1] > tab[j])
     		swap(tab[j-1], tab[j]);
}
 
int main()
{
	int t[6]={33,41,54,43,61,1}; 
	double td[6]={33.3,41.3,54.3,43.3,61.3,1.3};
	
	cout << "Sortowanie babelkowe - szablonem klasy!"<<endl<<endl;
	
	cout << endl<< "Liczby nieposortowane (int): ";
	for(int i=0;i<6;i++)
          cout<<t[i]<<"  ";   
    Sortowanie(t);
	cout << endl<<"Liczby posortowane (int):    ";
	for(int i=0;i<6;i++)
          cout<<t[i]<<"  ";
    
    
	cout << endl;
    
    
        
    cout << endl << endl<< "Liczby nieposortowane (double): ";
	for(int i=0;i<6;i++)
          cout<<td[i]<<"  ";     
	Sortowanie(td);     
    cout << endl << "Liczby posortowane (double):    ";
	for(int n=0;n<6;n++)
          cout<<td[n]<<"  ";
    
return 0;
}
