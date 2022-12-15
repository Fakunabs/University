#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

template <typename T>
class Array
{
    int n;
    T *data;
    public : 
        Array(int n = 2);
        Array(const Array &m);
        ~Array();
        template <typename U>
        friend istream &operator >> (istream &in,  Array<U> &m);
        template <typename U>
        friend ostream &operator << (ostream &out,const Array<U> &m);
        Array operator = (const Array &m);
        T &operator [] (int i);
};

template <typename T>
Array<T> :: Array(int n){
    this->n = n;
    data = new T[n];
}

template <typename T>
Array<T> :: Array(const Array<T> &m){
    n = m.n;
    data = new T[n];
    for(int i = 0; i < n; i++)
    {
        data[i] = m.data[i];
    }
}

template <typename T>
Array<T> :: ~Array()
{
    delete []data;
}
template <typename U>
istream &operator >> (istream &in, Array<U> &m){
    cout << "Nhap n = "; in >> m.n;
    for(int i = 0; i < m.n; i++) 
    {
        in >> m.data[i];
    }
    return in;
}
template <typename U>
ostream &operator << (ostream &out,const Array<U> &m)
{
    out << "So phan tu n = " << m.n;
    for(int i = 0; i < m.n; i++) 
    {
        out << m.data[i];
    }
    return out;
}

template <typename T>
Array<T> Array<T>::operator = (const Array<T> &m) 
{
    if(this != &m) 
    {
        n = m.n;
        data = new T[n];
        for(int i = 0; i < n; i++)
        {
            data[i] = m.data[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator [] (int i) 
{
    return this->data[i];
}

#endif