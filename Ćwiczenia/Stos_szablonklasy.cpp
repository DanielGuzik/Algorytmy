#include <iostream>
using namespace std;

template <class T> class Stos
{
	private:
 		int n; 
 		int wsk; 
 		int * S; 
 	public:
 		Stos(int x); 
 		~Stos(); 
 		bool empty(void);
 		int top(void);
 		void push(int v);
 		void pop(void);
};

template <class T>Stos<T>::Stos(int x)
{
 	n = x;
 	S = new int[x];
 	wsk = 0;
}

template <class T>Stos<T>::~Stos(){ delete [] S; }

template <class T> bool Stos<T>::empty(void) { return !wsk; }

template <class T>Stos<T>::top(void)
{
 	if(wsk) return S[wsk - 1];
 	return 0;
}

template <class T> void Stos<T>::push(int v) { if(wsk < n) S[wsk++] = v; }

template <class T> void Stos<T>::pop(void) { if(wsk) wsk--; }

int main()
{
	cout << "Stos implementowany przez tablice:"<<endl<<endl;
	Stos<int> S(10); 
 	int i;
 	for(i = 1; i <= 10; i++) S.push(i);
 	while(!S.empty())
 	{
 		cout <<"     "<< S.top() << endl;
 		S.pop();
 	}
 	
 	return 0;
} 
