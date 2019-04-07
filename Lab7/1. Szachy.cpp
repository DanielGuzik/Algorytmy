#include<set>
#include<iostream>
using namespace std;

	int i,j;
	bool q;
	std::set<int> s;

int probuj(int i, bool q, int x, int y) {
	int k,u,v;
	bool q1;	
}

int main() {
	const int n=5;
	const int nsq=25;
	
	int s[] = {1,2,3,4,5};
	int a[] = {1,2,-1,-2,-2,-1,1,2};
	int b[] = {1,2,2,1,-1,-2,-2,-1};
	int h[n][n];
	
	cout << "Plansza szachow pusta:" <<endl; 
	for(int i=0; i<n; i++) {
		cout << endl;
		for(int j=0; j<n; j++) {
			h[i][j]=0;
			cout << h[i][j] << " ";
		}	
	}
	
	h[1][1] = 1;
	probuj(2,1,1,q);
		
	cout << endl<<endl<< "Plansza szachow: " << endl;
	if(q==true) {
		for(int i=0; i<n; i++) {
			cout << endl;
			for(int j=0; j<n; j++) {
				h[i][j]=0;
				cout << h[i][j] << " ";
			}	
		}
	}
	else cout << endl << "Nie istnieje rozwiazanie";
	
	return 0;
}
