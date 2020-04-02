#include <iostream>
using namespace std;

void tablica (int tab[10][10]){
	int k;
		for (int i=1; i<11; i++){		
			for (int j=0; j<11; j++){
				 if (j==0){
						tab[k][0]=k;
						cout << tab[k][0]<< " ";
						k++;	
				}else{
					tab[i][j]=i*j;
					cout<< tab[i][j] << " ";
				}		
			}		
		cout <<endl;
	}
}

int main() {
	int tab[10][10];
	tablica(tab);
	int a,b;
	cin >>a>>b;
	cout << "Wynik mnozenia to: "<< a*b<<endl;
	return 0;
}
