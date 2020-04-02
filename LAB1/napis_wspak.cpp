#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string napis;
	cin >> napis;
	for(int i=napis.size()-1; i>=0; i--){
		cout << napis[i];
	}

	return 0;
}
