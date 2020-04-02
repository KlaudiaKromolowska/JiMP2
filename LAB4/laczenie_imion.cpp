#include <iostream>
#include <string>
using namespace std;

class Name{
    public:
    string firstName;
    string secondName;
    string thirdName;
    string surname;

    void wypisz(){
    	string fullName;
        if (secondName!=""){	
            if(thirdName!=""){
            	fullName=firstName+" "+ secondName+ " "+ thirdName + " " + surname;
            }else {
            	
            	fullName=firstName+" "+ secondName+" "+ surname;
            }
        }else {
        	
            	fullName=firstName+" "+ surname;
        }
    cout<< fullName;
	}
};


int main(){
    Name people1;
    people1.firstName="Klaudia";
    people1.secondName="Weronika";
    people1.surname="Kromolowska";
    people1.wypisz();
return 0;
}

