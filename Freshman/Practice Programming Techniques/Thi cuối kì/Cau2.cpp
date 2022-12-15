#include <stdio.h>
#include <math.h>
const int MAX = 100;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
}

int check(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int TimKiem(int a[], int n)
{
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        if (check(a[i]) == 1)
        {
            result = a[i];
        }
    }
    return result;
}

int main()
{
    int arr[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0 || n > MAX)
        {
            printf("\nNhap lai so luong phan tu: ");
        }
    } while (n <= 0 || n > MAX);
    printf("\nNHAP MANG\n");
    NhapMang(arr, n);
    printf("\nXUAT MANG\n");
    XuatMang(arr, n);
    int res = TimKiem(arr, n);
    if (res != 0)
    {
        printf("\nSo nguyen to cuoi cung: %d", res);
    }
    else
        printf("\nKhong co so nguyen to trong mang.");
}