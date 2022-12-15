#include <bits/stdc++.h>

using namespace std;

int 50ofArray(int n, int a[1000])
{
    int 50Value = a[0];
    for (int i = 1; i <= n; ++i)
    {
        if(a[i] > 50Value) 50Value = a[i];
    }
    return 50Value;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n phan tu trong mang : ";
    cin >> n;
    int a[1000];
    cout << "Nhap phan tu trong mang : ";
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    cout << "Gia tri lon nhat cua cac so vua nhap la = " << 50ofArray(n, a);
    return 0;
}
