#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
	int kost;
	srand(time(NULL));
	
	cout << "Llu scienna kostka chcesz grac? ";
	cin >> kost;
		
	if(kost < 4) cout << "Kostka musi miec minimum 4 sciany!";
	else 
		while (kost >=4) {
			char znak;
			cout << "Wylosowano liczbe: ";
			cout << rand()%kost+1<<endl;
		
			cout << "Aby zakonczyc wcisnij 'q': ";
			cin >> znak;
			if (znak == 'q') { break; }
		}
	return(0);
}
