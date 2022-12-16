#include <iostream>

using namespace std;

void InputArray(char X[],int k)
{
    for (int i=0;i<k;i++)
    {
        cout << "X[" << i << "]=";
        cin >> X[i];
    }
}

void OutputArray(char X[],int k)
{
    for (int i=0;i<k;i++)
    {
        cout << X[i];
    }
    cout << endl;
}

int CountChar(char X[],int k,char t)
{
    int count=0;
    for (int i=0;i<k;i++)
    {
        if (t==X[i]) count ++;
    }
    return count;
}

void Sort(char X[],int k)
{
    for (int i=0;i<k-1;i++)
    {
        for(int j=k-1;j>i;j--)
        {
            if(X[i]>X[j]) swap(X[i],X[j]);
        }
    }
}

void DeleteChar(char X[],int &k,int pos)
{
    if (pos>=k || pos<0) cout << "Vi tri can xoa khong hop le!\n";
    for (int i=pos;i<k-1;i++)
    {
        X[i]=X[i+1];
    }
    k--;
}

int main()
{
    int k;
    cout << "Nhap k:";
    cin >> k;
    char X[k],t;
    InputArray(X,k);
    cout << "Nhap 1 chu cai:";
    cin >> t;
    cout << "So chu cai " << t << " co trong mang la:" << CountChar(X,k,t) << endl;

    Sort(X,k);
    cout << "Sau khi sap xep:";
    OutputArray(X,k);

    int pos;
    cout << "Nhap vi tri can xoa:";
    cin >> pos;
    DeleteChar(X,k,pos);
    OutputArray(X,k);
    return 0;
}
