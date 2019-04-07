#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//-------------KLASA------------------
template<class T> class  CTablica{
	private:
        T* tab;  
		void kopiuj(CTablica& kopiujZ); // metoda kopiuj¹ca
        T* alok(int q);  // metoda allokuj¹ca 
    public:
        int q;
 		//----KONSTRUKTORY------
        CTablica(int q); 
        CTablica(T* tablica, int q);  
        CTablica(CTablica&) ; 
        
        //----DESTRUKTOR-------
        ~CTablica() {delete[] tab;}  
        
       //--------METODY------
        void operator=(CTablica&);
        T& operator[](int);            
        friend ostream& operator<< (ostream &o, CTablica& t){
            for(int i = 0; i < t.q; i++){
                cout << t[i] << " ";
            }
            cout << endl;
            return o;
        }
	};

//--------------KONSTRUKTORY------------------
template<class T> CTablica<T>::CTablica(int q){
	    tab = alok(q);
	}
template<class T> CTablica<T>::CTablica(T*tablica, int q) {
	    tab = alok(q);
	    for(int i=0; i<q; i++){
	        tab[i] = tablica[i];
	    }
	}
template<class T> CTablica<T>::CTablica(CTablica& tab2) {
	if(this!=&tab2){
	        tab = alok(tab2.q);
	        kopiuj(tab2);
	    }
	}

// -------------METODY------------------------
template<class T>void CTablica<T>::kopiuj(CTablica& kopiujZ){
	    for(int i=0; i<kopiujZ.q; i++){
	        tab[i] = kopiujZ[i];
	    }
	}
template<class T>T*CTablica<T>::alok(int q){  
	    this->q = q;
	    T*nowa = new T[q];
	    return nowa;
	}
	
//----------------OPERATORY--------------------
template<class T>T&CTablica<T>::operator[](int i){
	    return tab[i];
	}
template<class T>void CTablica<T>::operator=(CTablica& tab2) {
	    kopiuj(tab2);
	}
 
//------------PROGRAM G£ÓWNY--------------------
int main()
{  
    CTablica<int> Tab1(10);
    srand(time(NULL));
    for(int i=0; i<Tab1.q; i++){  
        Tab1[i] = rand()%20+1;
    }
    
    CTablica<int>Tab2(Tab1); // KOPIUJE DO DRUGIEJ TABLICY
   	
   	cout << "Tablica pierwsza:    ";
    cout << Tab1;
    cout << "Tablica skopiowana:  ";
    cout << Tab2;
   
    return 0;
}
