#include <cstdlib>
#include <iostream>
using namespace std;

int permutasi (int x, int y) {
	int nilai_permut, selisih;
	int faktoral = 1;
	selisih = x - y;
	
	while (x > 0) {
	faktorial = faktorial * x;
	x = x-1;
	}
	nilai_permut = faktorial/selisih;
	return(nialai_permut);
}

int main () {
	int n, r;
	cout << "masukan nilai n: ",
	cin >> n;
	while (n < 0) {
	cout << "masulan nilai N kembali : ";
	cin >> n; 
	}
	cout << "masulan nilai r; ";
	cin >> r;
	while (r < 0) {
	cout << "masukan nilai r kembali: ";
	cin >> r;
	}
	
	cout << "nilai permutasi " << r << " dari " << n <<  "adalah " << permutasi(n, r) << endl;

	system ("PAUSE");
	return(0);
}
