//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n

#include <bits/stdc++.h>

using namespace std;


int ham_Sum(int n)
{
    if(n == 1) return 1;

    return n + ham_Sum(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n : ";
    cin >> n;
    cout << "Tong 1 + 2 + ... + n la : " << ham_Sum(n);
    return 0;
}


