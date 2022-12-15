// Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n

#include <bits/stdc++.h>

using namespace std;
/*
int main(int argc, char const *argv[])
{
    float n;
    float sum = 0;
    float i = 1;
    do
    {
        cout << "Nhap n : ";
        cin >> n;
        if (n < 1)
        {
            cout << "Nhap so n phai lon hon 1, vui long nhap lai !" << endl;
        }
        
    } while (n < 1);
    
    while (i <= n)
    {
        sum = sum + (1 / (2 * i));
        i++;
    }
    cout << "S(n) = 1/2 + 1/4 + ... + 1/2n =  " << sum;
    return 0;
}
*/

// Cách dùng hàm đệ quy

float sum(float n)
{
    if (n == 1) return (0.5);

    return (1 / (2 * n)) + sum(n - 1);
}
int main(int argc, char const *argv[])
{
    float n;
    cout << "Nhap n : ";
    cin >> n;
    cout << "S(n) = 1/2 + 1/4 + ... + 1/2n = " <<sum(n);
    return 0;
}