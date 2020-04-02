#include <iostream>
using namespace std;

int main(){
	int a, najw=0;
	cout<< "Podaj rozmiar tablicy"<<endl;
	cin >>a;
	int tab[a];
	for (int i=0; i<a; i++){
		cin>>tab[i];
		if (tab[i]>najw){
			najw=tab[i];
		}
	}
	int suma[najw]={0};
	for (int i=0; i<a; i++){
		if(a==i){
			suma[i]++;
		}
	}
	int b=0;
	for (int i=0; i<a; i++){
		if(tab[i]>b){
			b=tab[i];
		}
	}
	cout<<b;
	for (int i=0; i<a; i++){
		cout<<endl<< i<< " "<<suma[i];
		
	}	
	return 0;
}
