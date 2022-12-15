#include <iostream>

using namespace std;

class Matrix{
    int n;
    int **data;
    public : 
    Matrix(int n = 3);
    Matrix(const Matrix &m);
    ~Matrix();
    friend istream &operator >> (istream &in,  Matrix &m);
    friend ostream &operator << (ostream &out,const Matrix &m);
    Matrix operator + (const Matrix &m);
    Matrix operator - (const Matrix &m);
    Matrix operator * (const Matrix &m);
};
Matrix :: Matrix(int n){
    this->n = n;
    data = new int*[n];
    for(int i = 0; i < n; i++)
        data[i] = new int[n];
}
Matrix :: Matrix(const Matrix &m){
    n = m.n;
    data = new int* [n];
    for(int i = 0; i < n; i++)
        data[i] = new int[n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            data[i][j] = m.data[i][j];
        }
}
Matrix :: ~Matrix(){
    for(int i = 0; i < n; i++)
        delete[]data[i];
    delete []data;
}
istream &operator >> (istream &in, Matrix &m){
    // in >> m;
    for(int i = 0; i < m.n; i++) 
        for(int j = 0; j < m.n; j++) {
            cout << "Nhap phan tu " << i << "," << j <<": ";
            in >> m.data[i][j];
        }
    return in;
}


ostream &operator << (ostream &out,const Matrix &m){
    for(int i = 0; i < m.n; i++) {
        for(int j = 0; j < m.n; j++){
            out << m.data[i][j] << endl;
        }
        out<<endl;
    }
    return out;
}
Matrix Matrix::operator + (const Matrix &m) {
    Matrix t(m);
    for(int i = 0; i < m.n; i++) 
        for(int j = 0; j < m.n; j++) {
            t.data[i][j] += data[i][j];
        }
    return t;
}
Matrix Matrix::operator - (const Matrix &m) {
    Matrix t(m);
    for(int i = 0; i < m.n; i++) 
        for(int j = 0; j < m.n; j++) {
            t.data[i][j] -= data[i][j];
        }
    return t;
}
Matrix Matrix::operator * (const Matrix &m) {
    Matrix t(m);
    for(int i = 0; i < m.n; i++){
        for(int k = 0; k < m.n; k++) {
        for(int j = 0; j < m.n; j++) {
            t.data[i][k]  *= data[k][j];
        }
        }
    }
    return t;
}

int main(){
    Matrix m;
    cin >> m;
    cout << m;
    return 0;
}