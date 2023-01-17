#include "Vecto.h"
#include <math.h>
#include <iostream>
#include <string.h>


using namespace std;

Vecto::Vecto(int n) 
{
    this->n = n;
    data = new double[n+1];
}
        
Vecto::Vecto(const Vecto &V) 
{
    this->n = V.n;
    data = new double[V.n+1];
    for(int i = 0; i < n; i++) 
    {
        data[i] = V.data[i];
    }
}
        
Vecto::Vecto(double a[], int n) 
{
    this->n = n;
    data = new double[n+1];
    for(int i = 0; i < n; i++) 
    {
        data[i] = a[i];
    }
}
        
Vecto::~Vecto() 
{
    delete[] data;
}

void Vecto::Nhap()
{
    cout << "Nhap so chieu: ";
    cin >> this->n;
    for(int i = 0; i < n; i++) 
    {
        cout << "Nhap toa do thu "<< i+1 << ": ";
        cin >> data[i];
    }
}
        
void Vecto::Xuat()
{
    cout << "(";
    for(int i = 0; i < n-1; i++) 
    {
        cout << data[i] << ",";
    }
    cout << data[n-1] << ")" << endl;
}

double Vecto::TinhDoDai() 
{
    double sum = 0;
    for(int i = 0; i < n; i++) 
    {
        sum += pow(data[i],2);
    }
    return sqrt(sum);
}

Vecto Vecto::Tong(Vecto V) 
{
    if(this->n = V.n) 
    {
        Vecto c(V.n);
        for(int i = 0; i < n; i++) 
        {
            c.data[i]= data[i] + V.data[i];
        }
        return c;
    }
    else
    {
        cout << "Loi du lieu !!!" << endl;
    }
}

double Vecto::TichVoHuong(Vecto V) 
{
    if(this->n = V.n) 
    {
        double tich = 0;
        for(int i = 0; i < n; i++) 
        {
            tich = data[i]*V.data[i];
        }
        return tich;
    }
    else
    {
        cout << "Loi du lieu !!!" << endl;
    }
}

double Vecto::TruyXuat(int i) 
{
    return data[i];
}