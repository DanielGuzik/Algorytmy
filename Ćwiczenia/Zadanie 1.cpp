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

class Stos {
	private:
	    Obiekt *Tablica[15];
	    ~Stos() {};
};
