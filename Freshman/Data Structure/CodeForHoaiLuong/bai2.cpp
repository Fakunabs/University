#include <bits/stdc++.h>
using namespace std;

typedef struct pt {
    char key;
    struct pt *next;
} PHANTU;

typedef PHANTU *PTR;

PTR Createnode(char x)
{
    PTR p;
    p = (PTR)malloc(sizeof(struct pt));
    p->key = x;
    p->next = NULL;
    return p;
}

PTR Input(char x, PTR L) 
{
    PTR P = Createnode(x);
    if(L == NULL) 
    {
        L = P;
    }
    else 
    {
        P->next = L;
        L = P;
    }
    return L;
}
int Coun(char x, PTR L) 
{
    int count = 0;
    PTR P = L;
    while(P != NULL) 
    {
        if(P->key == x) 
        {
            count += 1;
        }
        P = P->next;
    }
    return count;
}
int main() 
{
    PTR L;
    L = NULL;
    char x,y,z;
    cin >> x >> y >> z;
    L = Input(x,L);
    L = Input(y,L);
    L = Input(z,L);
    int count = Coun('a',L);
    cout << count;
    return 0;
}
