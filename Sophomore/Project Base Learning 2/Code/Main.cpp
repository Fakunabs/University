#include <bits/stdc++.h>            // g++ *.cpp -o Main
#include "LinkedList.h"             // .\Main.exe
#include "Product.h"
#include "Day.h"
#include "Person.h"
#include "Staff.h"
#include "Member.h"
#include "Detail.h"
#include "Discount.h"
#include "Bill.h"
#include "Category.h"

using namespace std;

void GetData(LinkedList<Product> &P,LinkedList<Staff> &S,LinkedList<Member> &M,LinkedList<Bill> &B,LinkedList<Detail> &Dtl,LinkedList<Category> &C,Discount &D);
void Menu(LinkedList<Product> &P,LinkedList<Staff> &S,LinkedList<Member> &M,LinkedList<Bill> &B,LinkedList<Detail> &Dtl,LinkedList<Category> &C,Discount &D);
void PrintfList(LinkedList<Product> &P,LinkedList<Staff> &S,LinkedList<Member> &M,LinkedList<Bill> &B,LinkedList<Detail> &Dtl,LinkedList<Category> &C,Discount &D);
void CreateNode(LinkedList<Product> &P,LinkedList<Staff> &S,LinkedList<Member> &M,LinkedList<Bill> &B,LinkedList<Detail> &Dtl,LinkedList<Category> &C,Discount &D);
void SaveData(const LinkedList<Product> &P,const LinkedList<Staff> &S,const LinkedList<Member> &M,const LinkedList<Bill> &B,const LinkedList<Detail> &Dtl,const LinkedList<Category> &C,const Discount &D);

int main()
{
    LinkedList<Product> P;
    LinkedList<Staff> S;
    LinkedList<Member> M;
    LinkedList<Bill> B;
    LinkedList<Detail> Dtl;
    LinkedList<Category> C;
    Discount D;
    GetData(P,S,M,B,Dtl,C,D);
    Menu(P,S,M,B,Dtl,C,D);
    SaveData(P,S,M,B,Dtl,C,D);
    return 0;
}

void Menu(LinkedList<Product> &P,LinkedList<Staff> &S,LinkedList<Member> &M,LinkedList<Bill> &B,LinkedList<Detail> &Dtl,LinkedList<Category> &C,Discount &D)
{

    Bill b;
    int choose;
    do
    {
        system("cls");
        cout << "1.In ...\n";
        cout << "2.Them ....\n";
        cout << "3.Sua ...\n";
        cout << "4.Xoa ...\n";
        cout << "0.Thoat\n";
        cout << "Chon:";
        cin >> choose;
        cin.ignore();
        switch(choose)
        {
        case 0:
            cout << "\n\n";
            system("pause");
            break;
        case 1:
            PrintfList(P,S,M,B,Dtl,C,D);
            break;
        case 2:
            CreateNode(P,S,M,B,Dtl,C,D);
            break;
        case 3:
            system("cls");
            system("pause");
            break;
        case 4:
            system("cls");
            system("pause");
            break;
        default:
            cout << "Nhap lai!";
            system("pause");
            break;
        }
    } while (choose);
}

void PrintfList(LinkedList<Product> &P,LinkedList<Staff> &S,LinkedList<Member> &M,LinkedList<Bill> &B,LinkedList<Detail> &Dtl,LinkedList<Category> &C,Discount &D)
{
    Bill b;
    int choose;
    do
    {
        system("cls");
        cout << "1.In danh sach cac san pham\n";
        cout << "2.In danh sach cac loai san pham\n";
        cout << "3.In danh sach cac hoa don\n";
        cout << "4.In danh sach cac nhan vien\n";
        cout << "5.In danh sach cac thanh vien\n";
        cout << "0.Thoat\n";
        cout << "Chon:";
        cin >> choose;
        cin.ignore();
        switch(choose)
        {
        case 0:
            break;
        case 1:
            system("cls");
            P.printfList();
            cout << "\n\n";
            system("pause");
            break;
        case 2:
            system("cls");
            C.printfList();
            cout << "\n\n";
            system("pause");
            break;
        case 3:
            system("cls");
            B.printfList();
            cout << "\n\n";
            system("pause");
            break;
        case 4:
            system("cls");
            S.printfList();
            cout << "\n\n";
            system("pause");
            break;
        case 5:
            system("cls");
            M.printfList();
            cout << "\n\n";
            system("pause");
            break;
        default:
            cout << "Nhap lai!";
            system("pause");
            break;
        }
    } while (choose);
}

void CreateNode(LinkedList<Product> &P,LinkedList<Staff> &S,LinkedList<Member> &M,LinkedList<Bill> &B,LinkedList<Detail> &Dtl,LinkedList<Category> &C,Discount &D)
{
    Bill b;
    int choose;
    do
    {
        system("cls");
        cout << "1.Them san pham\n";
        cout << "2.Them loai san pham\n";
        cout << "3.Them hoa don\n";
        cout << "4.Them nhan vien\n";
        cout << "5.Them thanh vien\n";
        cout << "0.Thoat\n";
        cout << "Chon:";
        cin >> choose;
        cin.ignore();
        switch(choose)
        {
        case 0:
            break;
        case 1:
            system("cls");
            P.printfList();
            cout << "\n\n";
            cin >> P;
            system("pause");
            break;
        case 2:
            system("cls");
            C.printfList();
            cout << "\n\n";
            cin >> C;
            system("pause");
            break;
        case 3:
            system("cls");
            B.printfList();
            cout << "\n\n";
            b.CreateBill("NV01",B,P,Dtl,M,D);
            B.InsertNodeAfter(b);
            system("pause");
            break;
        case 4:
            system("cls");
            S.printfList();
            cout << "\n\n";
            cin >> S;
            system("pause");
            break;
        case 5:
            system("cls");
            M.printfList();
            cout << "\n\n";
            cin >> M;
            system("pause");
            break;
        default:
            cout << "Nhap lai!";
            system("pause");
            break;
        }
    } while (choose);
}


void GetData(LinkedList<Product> &P,LinkedList<Staff> &S,LinkedList<Member> &M,LinkedList<Bill> &B,LinkedList<Detail> &Dtl,LinkedList<Category> &C,Discount &D)
{
    P.ReadDataFromFile("Product.txt");
    S.ReadDataFromFile("Staff.txt");
    M.ReadDataFromFile("Member.txt");
    B.ReadDataFromFile("Bill.txt");
    Dtl.ReadDataFromFile("Detail.txt");
    C.ReadDataFromFile("Category.txt");
    D.ReadNode("Discount.txt");
}

void SaveData(const LinkedList<Product> &P,const LinkedList<Staff> &S,const LinkedList<Member> &M,const LinkedList<Bill> &B,const LinkedList<Detail> &Dtl,const LinkedList<Category> &C,const Discount &D)
{
    P.SavaDataToFile("Product.txt");
    S.SavaDataToFile("Staff.txt");
    M.SavaDataToFile("Member.txt");
    B.SavaDataToFile("Bill.txt");
    Dtl.SavaDataToFile("Detail.txt");
    C.SavaDataToFile("Category.txt");
    D.SaveNode("Discount.txt");
}
