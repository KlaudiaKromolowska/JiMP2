#include <iostream>
using namespace std;
int main() {
	int a, silnia=1;
	cin >>a;
	for (int i=1; i<=a; i++){
		silnia*=i;
	}
	cout <<silnia<<endl;
	return 0;
}
