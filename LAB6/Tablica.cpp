
#include <iostream>
#include <string>

using namespace std;
int main(){


string tab[8][8]; //deklaracja tablicy o wymiarach 8x8
int n;
cin>>n;

for (int wiersz=0; wiersz<8; wiersz++){
	for(int kolumna=0; kolumna<8; kolumna++){
		tab[wiersz][kolumna]=".";
	}
}
for (int i=0; i<n; i++){
	int a, b;
	cin>>a>>b;
	tab[a-1][b-1]="X";
}

for (int wiersz=0; wiersz<8; wiersz++){
	for(int kolumna=0; kolumna<8; kolumna++){
		cout<<tab[wiersz][kolumna];
	}
	cout<<"\n";
}















return 0;}
