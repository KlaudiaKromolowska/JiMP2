#include <iostream>
using namespace std;

class PESEL{
	string pesel;
	public: 
	void yourPESEL(){
		cout <<"Podaj pesel: "; cin>>pesel;
	}
	void validatePESEL(){
		if(pesel.length()!=11){
				cout << "Zla dlugosc!"<< endl;
			}
			else{
				cout <<"Dobra dlugosc!" <<endl;
			}
		int kontrolna= 9*(int(pesel[0])-48)+ 7*(int(pesel[1])-48)+ 3*(int(pesel[2])-48) +1*(int(pesel[3])-48)+ 9*(int(pesel[4])-48)+ 7*(int(pesel[5])-48)+ 3*(int(pesel[6])-48)+ 1*(int(pesel[7])-48)+ 9*(int(pesel[8])-48)+ 7*(int(pesel[9])-48);
		if(int(pesel[10]-48)!=kontrolna%10){
			cout << " Zla kontrolna!"<< endl;
			}
			else{
				cout <<"Dobra kontrolna!" <<endl;
			}
		}
	
};


int main() {
	PESEL p;
	p.yourPESEL();
	p.validatePESEL();
	return 0;
}

