#include "Vecto.h"
#include <iostream>

using namespace std;

int main() 
{
    Vecto V;
    V.Nhap();
    V.Xuat();
    Vecto T;
    T.Nhap();
    T.Xuat();
    Vecto A(V.Tong(T));
    A.Xuat();
    system("pause");
    return 0;
}