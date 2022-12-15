#include "VanDongVien.h"
#include <bits/stdc++.h>

using namespace std;

void swap(VanDongVien &a, VanDongVien &b)
{
    VanDongVien temp = a;
    a = b;
    b = temp;
}
 
void Bubblesort(VanDongVien arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main()
{  
    VanDongVien p("Nguyen Van A", "Bong Da", 20, 178, 70.5);
    cout << p;
    
    cout << "Nhap So Luong: "; int n; cin >> n;
    VanDongVien *arr = new VanDongVien[n];
 
    for (int i = 0; i < n; ++i) cin >> arr[i];
 
    cout << endl << endl;
    for (int i = 0; i < n; ++i) cout << arr[i] << endl;
    
    cout << "Sort" << endl;
    Bubblesort(arr,n);
    for (int i = 0; i < n; ++i) cout << arr[i] << endl;
 
    return 0;
}