#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    cout << "Ecuador ";
    cout << rand() % 5 << " - ";
    cout << rand() % 5 << " ";
    cout << "Senegal\n";
    cout << "Ha Lan ";
    cout << rand() % 5 << " - ";
    cout << rand() % 5 << " ";
    cout << "Qatar\n";
    cout << "Xu wales ";
    cout << rand() % 5 << " - ";
    cout << rand() % 6 << " ";
    cout << "Anh\n";
    cout << "Iran ";
    cout << rand() % 5 << " - ";
    cout << rand() % 5 << " ";
    cout << "My\n";
    return 0;
}