#include<iostream>
#include "Matrix.h"
using namespace std;
int main() 
{
	matrix<double> A, B;
	cout << "Nhap ma tran A:\n";
	cin >> A;
	cout << "Ma tran A:\n" << A;
	cout << "Nhap ma tran B:\n";
	cin >> B;
	cout << "Ma tran B:\n" << B;
	matrix<double> C = A * B;
	cout << "\nMa tran AxB la:\n" << C;
	cout << "\nPhan tu (0,0) cua ma tran A la: " << A(0, 0) << endl;
	return 0;
}

