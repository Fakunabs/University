#include <iostream>
#include <iomanip>

using namespace std;

void Input_Array(int *a, int n);
void Output_Array(int *a, int n);
bool ascending(int l, int r);
bool descending(int l, int r);

void SelectionSort(int *a, int n, bool CompFunc(int, int));
void InsertionSort(int *a, int n, bool CompFunc(int, int));
void BubbleSort(int *a, int n, bool CompFunc(int, int));
void tQuickSort(int *a, int left, int right, bool CompFunc(int, int));
void QuickSort(int *a, int n, bool CompFunc(int, int));
void heapify(int a[], int N, int i, bool CompFunc(int, int));
void HeapSort(int a[], int N, bool CompFunc(int, int));
void ShellSort(int a[], int n, bool CompFunc(int, int));

int SequentialSearch(int a[], int left, int right, int x);
int BinarySearch(int a[], int left, int right, int x);
int InterPolationSearch(int a[], int left, int right, int x);

int main()
{
    // int a[] = {4, 7, 2, 5, 1, 6, 9, 0, 3, 8};
    int n;
    cout << "Input n="; // So phan tu
    cin >> n;
    int *a = new int[n];
    Input_Array(a, n);

    void (*Sort)(int *, int, bool(int, int)) = ShellSort; // Chon cach sap xep
    (*Sort)(a, n, ascending);                             // Chon sap xep tang dan hoac giam dan ascending,descending
    Output_Array(a, n);
    cout << endl;

    int x;
    cout << endl
         << endl
         << "Tu mang tang dan :";
    (*Sort)(a, n, ascending);
    Output_Array(a, n);
    cout << endl
         << "Nhap phan tu can tim:";
    cin >> x;
    int (*Search)(int *, int, int, int) = BinarySearch;
    cout << "Vi tri :" << (*Search)(a, 0, n, x) + 1;

    delete[] a;
    return 0;
}

void Input_Array(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Output_Array(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(a + i) << setw(2);
}

bool ascending(int l, int r)
{
    return l > r;
}

bool descending(int l, int r)
{
    return l < r;
}

void SelectionSort(int *a, int n, bool CompFunc(int, int))
{
    for (int i = 0; i < n - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < n; j++)
            if (CompFunc(*(a + pos), *(a + j)))
                pos = j;
        swap(*(a + pos), *(a + i));
    }
}

void InsertionSort(int *a, int n, bool CompFunc(int, int))
{
    for (int i = 1; i < n; i++)
    {
        int x = *(a + i), j = i - 1;
        while (j >= 0 && CompFunc(*(a + j), x))
        {
            *(a + j + 1) = *(a + j);
            j--;
        }
        *(a + j + 1) = x;
    }
}

void BubbleSort(int *a, int n, bool CompFunc(int, int))
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
            if (CompFunc(*(a + i), *(a + j)))
                swap(*(a + i), *(a + j));
    }
}

void tQuickSort(int *a, int left, int right, bool CompFunc(int, int))
{
    if (left >= right)
        return;
    if (left + 1 == right && CompFunc(*(a + left + 1), *(a + right)))
        swap(*(a + left + 1), *(a + right));
    else
    {
        int chot = a[right];
        int L = left - 1;
        for (int j = left; j < right; j++)
            if (CompFunc(chot, a[j]))
            {
                L++;
                swap(*(a + L), *(a + j));
            }
        swap(a[L + 1], a[right]);
        tQuickSort(a, left, L, CompFunc);
        tQuickSort(a, L + 2, right, CompFunc);
    }
}

void QuickSort(int *a, int n, bool CompFunc(int, int))
{
    tQuickSort(a, 0, n - 1, CompFunc);
}

void heapify(int a[], int N, int i, bool CompFunc(int, int))
{

    int largest = i;

    int left = 2 * i + 1;

    int right = 2 * i + 2;

    if (left < N && CompFunc(a[left], a[largest]))

        largest = left;
    if (right < N && CompFunc(a[right], a[largest]))

        largest = right;
    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, N, largest, CompFunc);
    }
}

void HeapSort(int a[], int N, bool CompFunc(int, int))
{
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(a, N, i, CompFunc);
    for (int i = N - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0, CompFunc);
    }
}

void ShellSort(int a[], int n, bool CompFunc(int, int))
{
    int interval, i, j, temp;
    for (interval = n / 2; interval > 0; interval /= 2)
    {
        for (i = interval; i < n; i++)
        {
            temp = a[i];
            for (j = i; j >= interval && CompFunc(a[j - interval], temp); j -= interval)
            {
                a[j] = a[j - interval];
            }
            a[j] = temp;
        }
    }
}

int SequentialSearch(int a[], int left, int right, int x)
{
    for (int i = left; i < right; i++)
        if (a[i] == x)
            return x;
    return -1;
}

int BinarySearch(int a[], int left, int right, int x)
{
    if (right >= left)
    {
        int mid = (left + right) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return BinarySearch(a, left, mid - 1, x);
        else
            return BinarySearch(a, mid + 1, right, x);
    }
    return -1;
}

int InterPolationSearch(int a[], int left, int right, int x)
{
    right--;
    while (left <= right && x >= a[left] && x <= a[right])
    {
        double val1 = (double)(x - a[left]) / (a[right] - a[left]);
        int val2 = (right - left);
        int Search = left + val1 * val2;

        if (a[Search] == x)
            return Search;

        if (a[Search] < x)
            left = Search + 1;
        else
            right = Search - 1;
    }
    return -1;
}
