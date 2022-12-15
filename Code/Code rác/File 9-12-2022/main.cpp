#include <iostream>
#include "Quanly.h"
using namespace std;

int main() 
{
    Quanly QL;
    int option;
    while(true) 
    {
        system("cls");
        cout << "==========QUAN LI PHONG KHACH SAN==========" << endl;
        cout << "1.Quan li phong binh thuong." << endl;
        cout << "2.Quan li phong binh VIP." << endl;
        cout << "0.Thoat." << endl;
        cout << "===========================================" << endl;
        cout << "Nhap lua chon : "; cin >> option;
        switch(option) 
        {
            case 1:
                QL.menuBT();
                break;
            case 2:
                QL.menuVIP();
                break;
            case 0:
                cout << "Thoat chuong trinh." << endl;
                return 0;
            default:
                cout << "Khong co chuc nang nay!!!" << endl;
                break;
        }
        system("pause");
    }
    system("pause");
    return 0;
}