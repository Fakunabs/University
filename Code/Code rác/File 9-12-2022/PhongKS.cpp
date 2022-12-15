#include "PhongKS.h"
#include "Date.h"
#include <string>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

PhongKS::PhongKS() 
{
    Date Nhan;
    Date Tra;
    this->MaPH = "10000";
    this->SoNguoi = 1;
    this->TinhTrang = true;
    this->NgayNhan = Nhan;
    this->NgayTra = Tra;
    this->Gia = 0;
}
        
void PhongKS::SetMaPH(string MaPH) 
{
    if(stoi(MaPH) >= 10000 && stoi(MaPH) <= 59999 ) 
    {
        this->MaPH = MaPH;
    }
    else 
    {
        cout << "Loi du lieu !!!" << endl;
    }
}
        
void PhongKS::SetSoNguoi(int SoNguoi) 
{
    if(SoNguoi >= 1 && SoNguoi <= 4) 
    {
        this->SoNguoi = SoNguoi;
    }
    else 
    {
        cout << "Lo du lieu !!!" << endl;
    }
}

void PhongKS::SetTinhTrang(bool TinhTrang) 
{
    this->TinhTrang = TinhTrang;
}
        
void PhongKS::SetNgayNhan(Date NgayNhan) 
{
    Date Nhan(1,1,0);
    if(TinhTrang == false && (NgayTra > NgayNhan || NgayNhan == NgayTra)) 
    {
        this->NgayNhan = NgayNhan;
    }
    else if(TinhTrang == true && NgayNhan == Nhan) 
    {
        this->NgayNhan = NgayNhan; 
    }
    else 
    {
        cout << "Loi du lieu !!!" << endl;
    }
}

void PhongKS::SetNgayTra(Date NgayTra) 
{
    Date Tra(1,1,0);
   if(TinhTrang == false && (NgayTra > NgayNhan || NgayNhan == NgayTra)) 
    {
        this->NgayTra = NgayTra;
    }
    else if(TinhTrang == true && NgayTra == Tra) 
    {
        this->NgayTra = NgayTra; 
    }
    else 
    {
        cout << "Loi du lieu !!!" << endl;
    }
}
               
string PhongKS::getMaPH() 
{
    return MaPH;
}
        
int PhongKS::getSoNguoi() 
{
    return SoNguoi;
}
        
bool PhongKS::getTinhTrang() 
{
    return TinhTrang;
}
    
Date PhongKS::getNgayNhan() 
{
    return NgayNhan;
}
        
Date PhongKS::getNgayTra() 
{
    return NgayTra;
}
        
istream &operator >> (istream &in, PhongKS &P) 
{
    cout << "Nhap thong tin phong : " << endl;
    do 
    {
        cout << "Nhap ma so phong :"; in >> P.MaPH;
        if(stoi(P.MaPH) < 10000 || stoi(P.MaPH) > 59999 ) 
        {
            cout << "Loi du lieu !!!" << endl;
        }
        
    } while(stoi(P.MaPH) < 10000 || stoi(P.MaPH) > 59999);
    do
    {
        cout << "Nhap so nguoi :"; in >> P.SoNguoi;
        if(P.SoNguoi < 1 || P.SoNguoi > 4) 
        {
            cout << "Lo du lieu !!!" << endl;
        }
    } while(P.SoNguoi < 1 || P.SoNguoi > 4);
    cout << "Nhap tinh trang :"; in >> P.TinhTrang;
    if(P.TinhTrang == false) 
        {
            do
            {
                cout << "Nhap ngay nhan :"<< endl; in >> P.NgayNhan;
                cout << "Nhap ngay tra :" << endl; in >> P.NgayTra;
                if(P.NgayNhan > P.NgayTra) cout << "Loi du lieu !!!" << endl;
            } while (P.NgayNhan > P.NgayTra);
        }
    else 
        {
            Date Nhan(1,1,0);
            P.NgayNhan = Nhan;
            Date Tra(1,1,0);
            P.NgayTra = Tra;
        }
    return in;
}
        
