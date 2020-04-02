#include <iostream>
using namespace std;

class Rodzic;
class Dziecko{
	string imie;
	string nazwisko;
	int wiek;
	string szkola;
	friend class Rodzic;
	public:
	Dziecko (string="Kasia", string="Kot", int=12, string="stara");
};

class Rodzic{
	string imie;
	string nazwisko;
	int wiek2;
	public:
	friend class Dziecko;
	Rodzic(string="Jan", string="Kowal", int=40);
	void przepisz(Dziecko &d){
		d.wiek=20;
	}
};

int main() {
	Rodzic r1;
	Dziecko d;
	r1.przepisz(d);
	return 0;
}
