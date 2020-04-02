#include <iostream>
using namespace std;
template <int n>

class tablica{
	public:
		int tablica[n];
	    int wpisz(){
	    	//cout <<"Podaj liczbe: "<<endl;
	    	cin >> tablica[n];
	    	return tablica[n];
			
		}
		void wypisz(int a){
	    		cout << tablica[a]<<" ";
	
		}
	    void suma(int tab[3]){
	    	int m=0;
	    	for (int i=0; i<4; i++){
	    			m+=tab[i];
				
			}
			cout <<"Suma to: "<<m;
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
	
	nowa.suma(tab);
 return 0;
}
