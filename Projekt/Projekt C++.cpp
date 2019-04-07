#include <iostream>
#include "class.cpp"
using namespace std;
//--------------- PROGRAM ---------------

int main() {
	
	Knight knight, knight_1;
	Postac *w_knight, *w_knight1;
	w_knight = &knight;
	w_knight1 = &knight_1;
		
	Palladyn palladyn, palladyn_1;
	Postac *w_palladyn, *w_palladyn1;
	w_palladyn = &palladyn;
	w_palladyn1 = &palladyn_1;
		
	Mag mag, mag_1;
	Postac *w_mag, *w_mag1;
	w_mag = &mag;
	w_mag1 = &mag_1;
			
	int zmienna,zmienna2;
	cout << "Wybierz Atakujacego:\n1. Knight\n2. Palladyn\n3. Mag\n";
	cout << "Wybor: "; cin >> zmienna;
	
	switch(zmienna)
	{
	case 1:  
	    cout << "\nWybierz Obronce:\n1. Knight\n2. Palladyn\n3. Mag\n";
	    cout << "Wybor: "; cin >> zmienna2;
	    
		switch(zmienna2) {
	    	case 1:
	    		system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_knight);
	    		cout << "\nObronca:\n";
				Load(w_knight1);
				
				AtackOnTheEnemy(w_knight, w_knight1);
				Promotion(w_knight);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_knight);
				break;
				
			case 2: 
				system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_knight);
	    		cout << "\nObronca:\n";
	    		Load(w_palladyn);
				
				AtackOnTheEnemy(w_knight, w_palladyn);
				Promotion(w_knight);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_knight);			
				break;
				
			case 3:
				system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_knight);
	    		cout << "\nObronca:\n";
	    		Load(w_mag);
				
				AtackOnTheEnemy(w_knight, w_mag);
				Promotion(w_knight);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_knight);							
				break;
				
			default:
				cout << "Zly wybor!";
				break;	
		}
	    break;
	    
	case 2:   
	    cout << "\nWybierz Obronce:\n1. Knight\n2. Palladyn\n3. Mag\n";
	    cout << "Wybor: "; cin >> zmienna2;
		switch(zmienna2) {
	    	case 1:
	    		system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_palladyn);
	    		cout << "\nObronca:\n";
	    		Load(w_knight);
				
				AtackOnTheEnemy(w_palladyn,w_knight);
				Promotion(w_palladyn);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_palladyn);			
				break;
				
			case 2: 
				system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_palladyn);
	    		cout << "\nObronca:\n";
	    		Load(w_palladyn1);
				
				AtackOnTheEnemy(w_palladyn,w_palladyn1);
				Promotion(w_palladyn);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_palladyn);
				break;
				
			case 3:
				system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_palladyn);
	    		cout << "\nObronca:\n";
	    		Load(w_mag);
				
				AtackOnTheEnemy(w_palladyn,w_mag);	
				Promotion(w_palladyn);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_palladyn);			
				break;
				
			default:
				cout << "Zly wybor!";
				break;	
		}	    
	    break;
	    
	case 3:	    
	    cout << "\nWybierz Obronce:\n1. Knight\n2. Palladyn\n3. Mag\n";
	    cout << "Wybor: "; cin >> zmienna2;
	    
		switch(zmienna2) {
	    	case 1:
	    		system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_mag);
	    		cout << "\nObronca:\n";
	    		Load(w_knight);
				
				AtackOnTheEnemy(w_mag,w_knight);
				Promotion(w_mag);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_mag);				
				break;
				
			case 2: 
				system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_mag);
	    		cout << "\nObronca:\n";
	    		Load(w_palladyn);
				
				AtackOnTheEnemy(w_mag,w_palladyn);
				Promotion(w_mag);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_mag);				
				break;
				
			case 3:
				system("CLS");
	    		cout << "WALKA:\n\n";
	    		
				cout << "Atakujacy:\n";
	    		Load(w_mag);
	    		cout << "\nObronca:\n";
	    		Load(w_mag1);
				
				AtackOnTheEnemy(w_mag,w_mag1);
				Promotion(w_mag);
				cout << "\n\nAtakujacy awansowal, to jego wyniki po walce: \n";
				ShowCharacter(w_mag);				
				break;
				
			default:
				cout << "Zly wybor!";
				break;	
		}		
	    break;
	    
	default:
	    cout << "Zly wybor!";
	    break;
	}
	return 0;
}
