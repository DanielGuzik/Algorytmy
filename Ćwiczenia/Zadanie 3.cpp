#include <cstdlib>
#include <iostream>
using namespace std;

/*
		Daniel Guzik
*/

class Obiekt {
	public: 
		Obiekt() {}   // Konstruktor
		~Obiekt() {}   // Destruktor
};

class Kontener {  
	public:
	    Obiekt *Tablica[15];
	    int i=0;
	    
	    virtual void usunIsprawdz() {   // Usuwanie i Sprawdzenie czy jest pusty obiektu z klasy
	    	if(i==0) {
	    		cout << "Kontener jest pusty" << endl;
			}
			Tablica[i-1] = NULL;
			cout << "Obiekt usuniêty" << endl;
			i--;
		}
		
	    virtual void dodajObiekt(Obiekt *nowyObiekt) {  // Dodawanie obiektu do klasy
	    	Tablica[i] = nowyObiekt;
			i++;
			cout << "Obiekt zosta³ dodany" << endl;	
		}
		
	    virtual void sprawdzObiekt(Obiekt *nowyObiekt) {   // Sprawdza czy obiekt znajduje siê w Kontenerze    
	    	for(int q=0; q<i; q++){
	    		if(Tablica[q] == nowyObiekt) {
	    				cout << "Jest w kontenerze na miejscu Tablica[" << q << "]" << endl;
				}
			}
			cout << "Nie jest w kontenerze" << endl;
		} 
};

class Dziedzicz_kontener : public Kontener {
	public:
		virtual void Dodaj(Obiekt *nowyObiekt) {	
			Kontener::dodajObiekt(nowyObiekt);
		};
		
		virtual void Usun() {
			Kontener::usunIsprawdz();
		}
		
		virtual void Sprawdz(Obiekt *nowyObiekt) {
			Kontener::sprawdzObiekt(nowyObiekt);
		}
};
