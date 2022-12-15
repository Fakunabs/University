// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2

#include <bits/stdc++.h>

using namespace std;

int Sum(int n)
{
    if(n == 1) return 1 * 1;

    return n * n + Sum(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n : ";
    cin >> n;
    cout << "S(n) = 1^2 + 2^2 + … + n^2 = " << Sum(n);
    return 0;
}
/*

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long S;
    S = 0;
    i = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        S = S + i * i;
        i++;
    }
    printf("i = %d", i);
    printf("\nTong 1^2 + 2^2 + ... + %d^2 la: %ld", n, S);
    return 0;
*/
