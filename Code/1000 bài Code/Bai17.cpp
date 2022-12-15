// Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    float x;
    cout << "Nhap x : ";
    cin >> x;
    float Tuso, S;
    long Mauso;
    do
    {
        cout << "Nhap n : ";
        cin >> n;
        if (n < 1) 
        {
            cout << "Ban nhap so n khong hop le, vui long nhap lai ! ";
        }

    } while (n < 1);

    S = 0;
    Tuso = 1;
    Mauso = 1;
    i = 1;   

    while (i <= n)
    {
        Tuso = Tuso * i;
        Mauso = Mauso * i;
        S = S + (Tuso/Mauso);
        i++;
    }
    cout << "S(n) = " << S;
    return 0;
}
