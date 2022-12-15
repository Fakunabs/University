// Bài 3: Tính S(n) = 1/1 + 1/2 + 1/3 + … + 1/n

#include <bits/stdc++.h>

using namespace std;
/* Cach thong thuong
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
        sum = sum + (1 / i);
        i++;
    }
    cout << "S(n) = 1/1 + 1/2 + 1/3 + … + 1/n =  " << sum;
    return 0;
}
*/


// Cách gọi hàm đệ quy

float sum(float n)
{
    if (n == 1) return 1 / 1;

    return 1 / n + sum(n - 1);
    
}

int main(int argc, char const *argv[])
{
    float n;
    cout << "Nhap n : ";
    cin >> n;
    cout << "S(n) = 1/1 + 1/2 + 1/3 + … + 1/n = " <<sum(n);
    return 0;
}

