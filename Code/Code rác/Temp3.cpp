#include <iostream>

using namespace std;

void Func(int& var_x, int var_y = 200)
{
    int var_z = var_x + var_y;
    var_x += var_z;
    if (var_y != 200)
    {
        cout << var_z << var_x << var_y;
    }
}
int main(int argc, char const *argv[])
    {
        int var_x = 50, var_y = 20;
        cout << var_x << var_y;
        Func(var_x, var_y);
        cout << var_x << var_y;
        return 0;
    }
    
    
