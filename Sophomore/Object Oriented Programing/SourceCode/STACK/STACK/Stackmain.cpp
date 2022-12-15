#include <iostream>
#include "Stack.h"
using namespace std;
int main(){
    int n;
    cout<<"Nhập số cần đổi:"; cin>>n;
    Stack S(8);
    do {
        S.Push(n%16);
        n /= 16;
    } while (n);
    cout<<"dãy số thập lục phân:";
    int x;
    Stack S1=S;
    char Hex[] = "0123456789ABCDEF";
    while (!S.isEmpty()) {
        S.Pop(x);
        cout<<Hex[x];
    }
    cout<<endl;
    Display(S1);
    return 0;
}