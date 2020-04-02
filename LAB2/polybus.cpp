#include <iostream>
#include <fstream>

using namespace std;

int **Array2D(int w, int k) {
	int liczba = 65;
	int **tab = new int *[w];
	bool one = false;
	
	for (int i=1; i<=w; i++) {
		tab[i] = new int [k];
		for (int j=1; j<=k; j++) {
			tab[i][j] = liczba;
			liczba++;
			if (liczba=='J' && one == false) {
				liczba++;
				one = true;
			}
		}
	}
	return tab;
}

void PrintTable(int **tab, int w, int k) {
	for (int i=0; i<w; i++) {
		for (int j=0; j<k; j++) {
			cout << char(tab[i][j]) << " ";
		}
		cout << endl;
	}
}

int main() {
	
	ifstream myfile("wej.txt");
	ofstream myfile_wyj("wyj.txt", ios_base::in | ios_base::app);
	char word[60];

	int **tab;
	tab = Array2D(5, 5);

	while (myfile >> word) {
		for (int id=0; id<6; id++) {
			for (int i=1; i<=5; i++) {
				for (int j=1; j<=5; j++) {
					if (tab[i][j] == int(word[id])) {
						myfile_wyj << i <<j<< " ";
						cout << i << j << " ";
					}	
				}
			}
		cout << " ";
		}
	}	
	PrintTable(Array2D(5, 5),5,5);
	myfile.close();
	myfile_wyj.close();

	return 0;
}
