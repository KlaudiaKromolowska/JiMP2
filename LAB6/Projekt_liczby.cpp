#include <iostream>
#include <string>
#include <cmath>
using namespace std;

	class Obliczenia {
		public: 
		int n;
		
		string intString(int a){
			string napis;
			while (a!=0){
				napis+=(a%10+'0');
				a/=10;
			}
			return napis;
		}	
		void wypisz(){
		cout <<endl<< "Okresl, co chcesz policzyc: "<<endl<<
		"1. Czy jest to liczba Fibbonacciego?"<<endl<<
		"2. Czy jest to liczba doskonala?"<< endl<<
		"3. Czy jest to liczba wywazona?"<< endl<<
		"4. Czy jest to liczba pierwsza?" << endl<<
		"5. Silnia liczby"<< endl<<
		"6. Dzielniki liczby"<< endl<<
		"7. Twoja liczba w systemie binarnym" <<endl<<
		"8. Pierwiastek tej liczby"<<endl<<
		"9. Potega tej liczby"<<endl<<
		"10. Czy jest to palindrom?"<<endl;
		}
	
		int Fibb (int n){
			int i=0, j=1;//dwa pierwsze wyrazy ci¹gu
	        for(int k=0; k<n; k++){ //za k okreœlamy aktualny numer ci¹gu w pêtli
			 	if(k==0) cout << i << " ";//wyraz o numerze 0, czyli pierwszy ciagu rowny jest 0
		        if(k==1) cout << j << " ";//natomiast drugi wyraz o numerze 1 wynosi 1
		        else{
		        	j+=i;//nowy wyraz to suma dwoch poprzednich, czyli suma wyrazow u numerach k-1 i k-2
		        	i=j-i;//zmieniamy wartosc dotychczasowa zmiennej i na tak¹, jak¹ przed momentem mia³a zmienna j
					cout << j << " ";	
				}
		  	}
		 	cout <<endl;
		}
		int doskonala (int n){
			int suma=0;
			for (int i=1; i<n; i++){
				if(n%i==0){
					suma+=i;
				}
			}
			if(suma==n)		cout<<"Liczba jest doskonala - suma jej dzielnikow jest jej rowna!"<<endl;
			else cout <<"Liczba nie jest doskonala. Liczby doskonale to np. 6, 28, 496, 8128..."<<endl;
			
		}
		int wywazona (int n){
			int p=0, np=0;
			for (int i=1; i<n; i++){
				if(n%i==0){
					if(i%2==0)
						p++;
					else 
						np++;
				}
			}
			if (p==np)	cout << "Liczba jest wywazona - ma tyle samo dzielnikow parzystych i nieparzystych!"<<endl;
			else	cout <<"Liczba nie jest wywazona. Nie  ma tyle samo dzielnikow parzystych i nieparzystych!"<<endl;
		}
		void pierwsza (int n){
			bool czyPierwsza=true;
			for (int i=0; i<n; i++){
				if(n%i==0){
					czyPierwsza=false;
				}
			}
			if (czyPierwsza==true)
				cout << "Liczba jest liczba pierwsza!";
			else 
				cout << "Liczba nie jest liczba pierwsza.";
		}
		void silnia (int n){
			int wynik=1;
			for (int i=0; i<n;i++){
				wynik*=i;
			}
			cout<< wynik<<endl;
		}	
		void dzielnik (int n){
			for (int i=1; i<n; i++){
				if(n%i==0){
					cout << i<< " ";
				}
			}
			cout <<endl;
		}
		void bin (int n){
			int a[10], i;
			for(i=0; n>0; i++){    
				a[i]=n%2;    
				n=n/2;  
			}       
			for(i=i-1; i>=0; i--){
				cout<<a[i];    
			}    
			cout <<endl;
			
		}
		void pierwiastek (int n){
			int a;
			cout <<"Okresl stopien pierwiastka: ";
			cin>> a;
			cout << pow(n, a) << endl;
		}
		void potega(int n){
			int a;
			cout <<"Okresl stopien potegi: ";
			cin>> a;
			cout << pow(n, a) << endl;
		}
		
		void palindrom(int n){
			bool palind=true;
			string napis=intString(n);
			for(int i=0; i<napis.size()/2; i++){
				if (napis[i]!=napis[napis.size()-i-1]){
					palind=false;
				}
			}
			cout <<palind<<endl;
			
		}
		
	};



	
int main(){
	int i=0;
	string odp="tak";
	Obliczenia o;
	while(i<1){
		int liczba;
		cout << "Podaj liczbe: "; cin>>liczba;
		o.wypisz();
		while(odp=="tak" || odp=="Tak" || odp=="TAK"){
			int opcja;
			cin >> opcja;
			switch(opcja){
				case 1:
					o.Fibb(liczba);
					break;
						
				case 2:
					o.doskonala(liczba);
					break;
				
				case 3:
					o.wywazona(liczba);
					break;
				
				case 4:
					o.pierwsza(liczba);
					break;
				
				case 5:
					o.silnia(liczba);
					break;
				
				case 6:
					o.dzielnik(liczba);
					break;
				
				case 7:
					o.bin(liczba);
					break;
				
				case 8:
					o.pierwiastek(liczba);
					break;
				
				case 9:
					o.potega(liczba);
					break;	
					
				case 10: 	
					o.palindrom(liczba);
					break;
			}
			cout << "Czy chcesz wykonac inne dzialanie z ta liczba?"<<endl;
			cin >> odp;
		}	
	}
	
	return 0;
}
