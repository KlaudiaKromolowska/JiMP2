#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

unsigned int godzMin (string czas){
	int godzina;
	if (czas.length()==4){
		godzina=czas[0]-48;
	}else{
		godzina=(czas[0]-48)*10+czas[1]-48;
	}
	int min=czas[czas.length()-1]-48+(czas[czas.length()-2]-48)*10;
	int minuty=godzina*60+min;
	return minuty;
}
int main (){
	ifstream myfile("1.txt");
	int a=100000, z=0;
	string time2, c, b;
	string time[20];
	int i=0;
	int x=0;
	while (myfile >> time2){
			time[i]=time2;
			x++;
			i++;
	}
	for (int i=0; i<x; i++){
		for (int j=0; j<x; j++){
			if (j!=i){
				int wartosc=abs(godzMin(time[i])-godzMin(time[j]));
				if (wartosc>720){
					wartosc=1440-wartosc;
					if(wartosc<a){
						a=wartosc;
						b=time[i];
						c=time[j];
					}
				
				}
			}
		}
	}
	myfile.close();
	cout << b << " ||| " <<c<< " ||| roznica czasu: "<< a;
	return 0;	
}
