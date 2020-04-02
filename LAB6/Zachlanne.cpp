#include <iostream>

using namespace std;

void sortuj(double* p_waga, int* p_pos, int n){
	double t;
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(p_waga[j] <= p_waga[j+1]){
				swap(p_waga[j], p_waga[j+1]);
				swap(p_pos[j], p_pos[j+1]);
			}
		}
	}
}

int* zapakujZachlannie(double* p_waga, int n, double U) {
	int* p_pos = new int[n];
	for(int i = 0; i < n; i++)
		p_pos[i] = i;
	sortuj(p_waga, p_pos, n);

	int* p_sztuk = new int[n];
	for(int i = 0; i < n; i++){
		p_sztuk[p_pos[i]] = U / p_waga[i];
		U -= p_sztuk[p_pos[i]] * p_waga[i];
	}
	delete[] p_pos;
	return p_sztuk;
}

int main () {
	int n;
	double U;
	cin >> n >> U;
	
	double* p_wart = new double[n];
	for(int i = 0; i < n; i++)
		cin >> p_wart[i];

	double* p_waga = new double[n];
	for(int i = 0; i < n; i++)
		cin >> p_waga[i];

	int* p_sztuk = zapakujZachlannie(p_waga, n, U);
	for(int i = 0; i < n; i++)
		cout << p_sztuk[i] << " ";

	delete[] p_waga, p_wart, p_sztuk;
	system("pause");
	return 0;
}
