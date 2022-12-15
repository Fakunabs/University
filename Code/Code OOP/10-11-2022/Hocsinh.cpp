#include <iostream>
#include "Hocsinh.h"
using namespace std;

Hocsinh::Hocsinh(string hoten, int diemvan, int diemtoan)
{
    this->hoten = hoten;
    this->diemtoan = diemtoan;
    this->diemvan = diemvan;
}
Hocsinh::Hocsinh(const Hocsinh &HS)
{
    this->hoten = HS.hoten;
    this->diemtoan = HS.diemtoan;
    this->diemvan = HS.diemvan;
}
void Hocsinh::Nhap()
{
    cout << "Nhap ho ten cua hoc sinh: " ;
    cin >> hoten;
    cout << "Nhap diem toan: ";
    cin >> diemtoan;
    cout << "Nhap diem van: ";
    cin >> diemvan;
}
void Hocsinh::Xuat()
{
     cout << "Ho va ten : " << hoten << endl;
     cout << "Diem toan : " << diemtoan << endl;
     cout << "Diem van : " << diemvan << endl;
}
string Hocsinh::getHoTen()
{
    return hoten;
}
double Hocsinh::getDiemToan()
{
    return diemtoan;
}
double Hocsinh::getDiemVan()
{
    return diemvan;
}
void Hocsinh::setHoTen(string hoten)
{
    this->hoten = hoten;
}
void Hocsinh::setDiemToan(double diemtoan)
{
    this->diemtoan = diemtoan;
}
void Hocsinh::setDiemVan(double diemvan)
{
    this->diemvan = diemvan;
}
double Hocsinh::diemTrungBinh()
{
   return (diemtoan + diemvan) / 2;
   cout << "Diem trung binh :" << (diemtoan + diemvan) / 2;
}
void Hocsinh::xepLoai() 
{ 
    if(diemTrungBinh() >= 8.0) cout << "Gioi" << endl;
    else if(diemTrungBinh() >= 7.0) cout << "Kha" << endl;
    else if(diemTrungBinh() >= 5.0) cout << "Trung binh" << endl;
    else cout << "Yeu" << endl;
}
