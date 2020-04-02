#include <iostream>
using namespace std;

string palind (string napis){
	for (int i=0; i<napis.size()/2; i++){
		swap(napis[i], napis[napis.size()-i-1]);
	}
	return napis;
}

int main() {
	string tekst;
	cin >> tekst;
	if( palind (tekst) == tekst){
		cout<< "Palindrom!";
	}else{
		cout << tekst << " to nie palindrom. Od tylu wyglada tak: "<< palind(tekst);
	}
	return 0;
}
