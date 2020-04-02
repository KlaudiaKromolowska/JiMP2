#include <iostream>
using namespace std;
template <class typ >

class klasa{
public:
    typ k;
    typ przypisz(){
    	typ a;
    	cin >> a;
    	return a;
	}
    
};
int main()
{
    klasa <int> nowa;
    klasa <double> nowa2;
    
	cout << nowa.przypisz() + nowa2.przypisz() <<endl;
}


