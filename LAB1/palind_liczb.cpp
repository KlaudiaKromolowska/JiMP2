#include <iostream>
#include <string>
using namespace std;

string intString(int a){
	string napis;
	while (a!=0){
		napis+=(a%10+'0');
		a/=10;
	}
	return napis;
}
int dziesBin (int a){
	int tab[30];
	int i=0;
	while(a!=0){
		tab[i]=a%2;
		a/=2;
		i++;
	}
	for(int j=0;j<=15;j++){
		if (tab[j]!=tab[15-j]){
			return 0;
		}
	}
}

bool palin(int a){
	bool palind=true;
	string napis=intString(a);
	for(int i=0; i<napis.size()/2; i++){
		if (napis[i]!=napis[napis.size()-i-1]){
			palind=false;
		}
	}
	return palind;
}



int main() {
	int dzies, bin;
	cin >>dzies;
	bin=dziesBin(dzies);
	if(palin(dzies)==true && palin(bin)==true){
		cout << "Liczba: "<< dzies << " "<< bin<< " to palindrom!";
	}else{
			cout << "Liczba: "<< dzies << " to nie palindrom :( ";
	}
	
	return 0;
}
