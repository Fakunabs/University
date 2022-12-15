#include <iostream>
using namespace std;

class Matrix
{
private:
    int n;
    int **data;
public:
    Matrix(int n = 3);
    Matrix(const Matrix &m);
    ~Matrix();
    Matrix operator + (const Matrix &m);
    Matrix operator - (const Matrix &m);
    Matrix operator * (const Matrix &m);
    istream &operator >> (istream &in, Matrix &m);
    ostream &operator << (ostream &out, const Matrix &m);
};
//
Matrix::Matrix(int n)
{
    this->n = n;
    data = new int*[n];
    for(int i = 0; i < n; i++){
        data[i] = new int[n];
    }
}
Matrix::Matrix(const Matrix &m)
{
    this->n = m.n;
    data = new int*[n];
    for(int i = 0; i < n; i++){
        data[i] = new int[n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            data[i][j] = m.data[i][j];
        }
    }
}
Matrix::~Matrix()
{
    for(int i = 0; i < n; i++){
        delete []data[i];
    }
    delete []data;
}
istream &operator >> (istream &in, Matrix &m)
{
    for(int i = 0; i < m.n; i++){
        for (int j = 0; j < m.n; j++){
            cout << "Nhap phan tu " << i << "," << j << ": ";
            in >> m.data[i][j];
        }
    }
    return in;
}
ostream &operator <<(ostream &out, Matrix &m)
{
     for(int i = 0; i < m.n; i++){
        for (int j = 0; j < m.n; j++){
            out << m.data[i][j];
        }
        out<< endl;
    }
    return out;
}//dsadas
