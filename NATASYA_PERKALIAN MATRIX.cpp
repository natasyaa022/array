#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
//mendklarasikan array dan variabel 
int A[2] [2], B[2] [2], C[2] [2];

cout << "masukan nilai A11 : ";
cin>>A[0] [0];
cout << "masukan nilai A12 : ";
cin>>A[0] [1];
cout << "masukan nilai A21 : ";
cin>>A[1] [0];
cout << "masukan nilai A22 : ";
cin>>A[1] [1];

cout << "masukan nilai B11 : ";
cin>>B[0] [0];
cout << "masukan nilai B12 : ";
cin>>B[0] [9];
cout << "masukan nilai B21 : ";
cin>>B[1] [0];
cout << "masukan nilai B22 : ";
cin>>B[1] [1];

//mebnghitung nilai array 
C[0] [0] = (A[0] [0] * B[0] [0]) + (A[0] [1] * B[1] [0]);
C[0] [1] = (A[0] [0] * B[0] [1]) + (A[0] [1] * B[1] [1]);
C[1] [0] = (A[1] [0] * B[0] [0]) + (A[1] [1] * B[1] [0]);
C[1] [1] = (A[1] [0] * B[0] [1]) + (A[1] [1] * B[1] [1]);

cout << "nilai matriks C adalah: " << endl;
cout << " [ " <<C[0] [0]<< " " <<C[0] [0]<<" ]"<< endl;
cout << " [ " <<C[1] [0]<< " "<<C[1] [1]<< " ]" << endl;

	system ("PAUSE");
	return 0;
}
