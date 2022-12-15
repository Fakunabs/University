//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n

#include <bits/stdc++.h>

using namespace std;


// int main(int argc, char const *argv[])
// {
//     int n, i;
//     long sum;
//     n = 1;
//     sum = 0;
//     cout << "Nhap n : ";
//     cin >> n;

//     while (i <= n)
//     {
//         sum += i;
//         i++;
//     }
//     cout << endl << "Tong 1 + 2 + ... + n la : " << sum;
//     return 0;
// }

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


