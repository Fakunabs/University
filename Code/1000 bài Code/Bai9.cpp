// Bài 9: Tính T(n) = 1 . 2 . 3 . ... . n

#include <bits/stdc++.h>

using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     int i = 1;
//     long Product = 1;
//     do
//     {
//         cout << "Nhap n : ";
//         cin >> n;
//         if (n > 99)
//         {
//             cout << "Ban nhap so qua gioi han, vui long nhap lai !";
//         }
        
//     } while (n > 99);
    
//     while (i <= n)
//     {
//         Product = Product * i;
//         i++;
//     }
//     cout << "T(n) = 1 . 2 . 3 . ... . n = " << Product;

//     return 0;
// }

// Cách hàm đệ quy

long Product(int n)
{
    if(n == 1) return 1;

    return n * Product(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Moi ban nhap n : ";
    cin >> n;
    cout << "T(n) = 1 . 2 . 3 . ... . n = " << Product(n) ;
    return 0;
}
