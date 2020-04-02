#include <iostream>

using namespace std;
int silnia(int a){
	if (a==0){
		return 1;
	}else{
		return a*silnia(a-1);
	}
}

int main() {
	int a;
	cin>>a;
	cout << silnia(a);
	return 0;
}
