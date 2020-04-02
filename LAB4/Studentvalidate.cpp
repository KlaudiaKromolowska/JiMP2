#include <iostream>
using namespace std;

class Studet{
	public: 
	string imie;
	string nazwisko;
	int wiek;
	string kierunek;
	
	bool vImieNazwisko(){
		cout <<"Podaj imie: "; cin >> imie;
		cout <<"Podaj nazwisko: "; cin >> nazwisko;
		if (int(imie[0])<41 || int(imie[0])>90 || int(nazwisko[0])<41 || int(nazwisko[0])>90){
			cout<< "Nazwy wlasne piszemy duza litera"<< endl;
			return false;
	 }
		for (int i=1; i<nazwisko.length(); i++){
			if (int(imie[i])>122 || int(imie[i])<61 ||int(nazwisko[i])>122 || int(nazwisko[i])<61){
				cout<< "Imie i nazwisko powino zawierac tylko litery" << endl;
				return false;
				break;
			}
		}
		return true;
	}
	
	bool vWiek(){
		cout <<"Podaj wiek: "; cin >> wiek;
		if(wiek>100 || wiek<10){
			cout <<"Wiek poza zakresem. Wybierz liczbe miedzy 10, a 100"<< endl;
			return false;
		}else{
		return true;
		}
		
	}
	
	bool vKierunek(){
		cout <<"Podaj kierunek: "; cin >> kierunek;
		if (kierunek!="informatyka" &&kierunek!="ekonomia" &&kierunek!="matematyka" &&kierunek!="fizyka" &&kierunek!="filozfia"){
			cout << "Wybierz inny kierunek studiow"<< endl;
			return false;
		}else{
			cout << endl<< endl;
			return true;
		}
	}
};
int main() {
	Studet p;
	int i=1, j=1;
	while(i<10){
		 cout << "Osoba nr: " <<j<<endl;
		while (p.vImieNazwisko()!=true){}
		while (p.vWiek()!=true){}
		while (p.vKierunek()!=true){};
		j++;
	}
	return 0;
}

