#include <iostream>
using namespace std;
template <int n>

class tablica{
	public:
	    int liczba[n];
	    int wpisz(){
	    	cout <<"Podaj liczbe: "<<endl;
	    	cin >> liczba[n];
	    	return liczba[n];
			
		}
		void wypisz(int a){
	    		cout << liczba[a]<<" ";
	
		}
	    void maks(int tab[3]){
	    	int m=0;
	    	for (int i=0; i<4; i++){
	    		if (m<tab[i]){
	    			m=tab[i];
				}
			}
			cout <<"Najwieksza to: "<<m;
		}
};
int main(){
	tablica<3> nowa;
	int tab[3];
	for (int i=0; i<4; i++){
		tab[i]=nowa.wpisz();
	}
	for (int i=0; i<4; i++){
		cout << tab[i]<<" ";
	}
	nowa.maks(tab);
 return 0;
}
