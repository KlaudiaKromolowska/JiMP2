#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
#include <sstream>
using namespace std;
//nazwa produktu | obj produktu | kategoria
//przekaski / alkohol / jedzenie / owoc / picie

	class Jedzenie{
		public:
			string kategoria[20];
			string nazwa[20];
			int objetosc[20];
		
		void dodawaj(){										//funkcja dodaje elementy z pliku
			fstream plik;
			plik.open("papu.txt");
			string tab[20][2];
			int obj[20];
			for(int i=0; i<20; i++){
				plik>>tab[i][0]>>obj[i]>>tab[i][1];
			}
			for(int i=0; i<20; i++){
				nazwa[i]=tab[i][0];
				objetosc[i]=obj[i];
				kategoria[i]=tab[i][1];
			}
		}
		
		
		
	int decydujAlk(int plecak){											// funkcja decyduje czy zabraæ do plecaka
		Jedzenie papu;
		papu.dodawaj();
		string zawartosc="";
		for(int i=0;i<20; i++){
			if(kategoria[i]=="alkohol"&&plecak-objetosc[i]>0){
				zawartosc+=nazwa[i]+"\n";
				plecak-=objetosc[i];
			}
		}
		cout << zawartosc;												// podaje co zabieramy z alkoholu
		return plecak;
	}
	void sortuj(){
		Jedzenie papu;
		papu.dodawaj();
		for (int i=0;i<20;i++){												
			for (int j=i+1; j<20;j++){							
				if(objetosc[j]<objetosc[i]){					
					swap(objetosc[i], objetosc[j]);
					swap(nazwa[i], nazwa[j]);
					swap(kategoria[i], kategoria[j]);
				}
			}
		}
	}

	void decyduj(int plecak){
		Jedzenie papu;
		papu.sortuj();
		string zawartosc="";
		int wyjatek;
		for(int i=0; i<20; i++){
			if(plecak-objetosc[i]>=0 && kategoria[i]!="alkohol"){
				zawartosc+=nazwa[i]+"\n";
				plecak-=objetosc[i];
				wyjatek=i;
			}
		}
		cout <<zawartosc<< "\nNic wiecej sie nie zmiesci, wolne miejsce w plecaku wynosi: "<<plecak<<endl;
		if(wyjatek==18){
			cout<<"Skonczyly sie produkty!";
		}else{
			cout<<"Objetosc nastepnego produktu to: "<<objetosc[wyjatek+1];
		}
	}
};

int main(){
	int plecak;
	cout <<"Podaj rozmiar plecaka: "; cin>>plecak;
	Jedzenie papu;
	papu.dodawaj();
	plecak=papu.decydujAlk(plecak);
	papu.sortuj();
	papu.decyduj(plecak);
	
	
	return 0;
}
	
