#pragma once
#include<iostream>
using namespace std;
template <typename T>
class matrix
{
private:
	int n;
	T** A;
public:
	matrix(int n = 2);
	matrix(const matrix& x);
	~matrix();
	friend ostream& operator << (ostream& cout, const matrix<T>& x)
	{
		for (int i = 0; i < x.n; i++)
		{
			for (int j = 0; j < x.n; j++)
			{
				cout << x.A[i][j] << " ";
			}
			cout << endl;
		}
		return cout;
	}
	friend istream& operator >> (istream& cin, matrix<T>& x)
	{
		for (int i = 0; i < x.n; i++)
		{
			for (int j = 0; j < x.n; j++)
			{
				cin >> x.A[i][j];
			}
		}
		return cin;
	}
	matrix operator + (const matrix& x);
	matrix operator - (const matrix& x);
	matrix operator * (const matrix& x);
	T& operator () (int n, int m) const;
	const matrix& operator = (const matrix& x);
};
template <typename T>
matrix<T> matrix<T>::operator + (const matrix<T>& x)
{
	matrix t(x);
	for (int i = 0; i < x.n; i++)
	{
		for (int j = 0; j < x.n; j++)
		{
			t.A[i][j] += x.A[i][j];
		}
	}
	return t;
}
template <typename T>
matrix<T> matrix<T>:: operator - (const matrix<T>& x)
{
	matrix<T> t(x);
	for (int i = 0; i < x.n; i++)
	{
		for (int j = 0; j < x.n; j++)
		{
			t.A[i][j] -= x.A[i][j];
		}
	}
	return t;
}
template <typename T>
matrix<T> matrix<T>:: operator * (const matrix<T>& x)
{
	matrix<T> k(x.n);
	for (int i = 0; i < x.n; i++)
	{
		for (int j = 0; j < x.n; j++)
		{
			k.A[i][j] = 0;
			for (int l = 0; l < n; l++)
			{
				k.A[i][j] += A[i][l] * x.A[l][j];
			}

		}
	}
	return k;
}
template <typename T>
T& matrix<T>::operator () (int i, int j) const
{
	return A[i][j];
}
template <typename T>
const matrix<T>& matrix<T>::operator=(const matrix<T>& x)
{
	if (this->n == n) {
		for (int i = 0; i < x.n; i++) {
			for (int j = 0; j < x.n; j++) {
				A[i][j] = x(i, j);
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			delete[] A[i];
		}
		delete[]A;
		this->n = x.n;
		A = new T * [n];
		for (int i = 0; i < n; i++) {
			A[i] = new T[n];
		}
		for (int i = 0; i < x.n; i++) {
			for (int j = 0; j < x.n; j++) {
				A[i][j] = x(i, j);
			}
		}
	}
	return *this;

}

template <typename T>
matrix<T>::matrix<T>(int n)
{
	this->n = n;
	A = new T * [n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new T[n];
	}
}
template <typename T>
matrix<T>::matrix<T>(const matrix<T>& x)
{
	this->n = x.n;
	this->A = new T * [n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new T[n];
	}
	for (int i = 0; i < x.n; i++)
	{
		for (int j = 0; j < x.n; j++)
		{
			A[i][j] = x.A[i][j];
		}
	}

}
template <typename T>
matrix<T>::~matrix<T>()
{
	for (int i = 0; i < n; i++)
	{
		delete[] A[i];
	}
	delete[]A;
}

