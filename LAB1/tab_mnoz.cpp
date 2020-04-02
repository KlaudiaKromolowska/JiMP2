#include <iostream>
using namespace std;

int mnozenia(int tab[][10]){
	int i=1;
	int j=1;
	while (i<=10){
		j=1;
		while (j<=10){
			tab[i][j]=i*j;
			j++;
		}
		i++;
	}
}


int main() {
	int tab[10][10];
	mnozenia(tab);
	return 0;
}
