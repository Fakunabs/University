#include <bits/stdc++.h>

using namespace std;

void Tower(int n, char A, char B, char C)
{
    if (n == 1){
         cout << A << "------->" << C << endl;
         return;
    } 
    Tower(n-1, A, C, B);
    Tower(1, A, B, C);
    Tower(n-1,B, A, C);    
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "So dia  : ";
    cin >> n;
    char A= 'A', B = 'B', C = 'C';
    Tower(n , A, B, C);
    return 0;
}