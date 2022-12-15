#include "ThiSinh.h"
#include <iostream>
using namespace std;

ThiSinh::ThiSinh(Date ngaysinh, string hoten,double diemToan, double diemLy, double diemHoa) 
{
    this->hoten = hoten;
    this->ngaysinh = ngaysinh;
    this->diemToan = diemToan;
    this->diemLy = diemLy;
    this->diemHoa = diemHoa;
    this->diemTB = (diemToan + diemLy + diemHoa) / 3;
}
                
ThiSinh ThiSinh::operator = (const ThiSinh &TS) 
{
    if(this != &TS) 
    {
        this->hoten = TS.hoten;
        this->ngaysinh = TS.ngaysinh;
        this->diemToan = TS.diemToan;
        this->diemLy = TS.diemLy;
        this->diemHoa = TS.diemHoa;
        this->diemTB = TS.diemTB;
    }
    return *this;
}

istream &operator >> (istream &in, ThiSinh &TS) 
{
    cout << "Nhap thong tin thi sinh: " << endl;
    cout << "Nhap ho ten : "; in >> TS.hoten;
    cout << "Nhap ngay sinh: "; in >> TS.ngaysinh;
    cout << "Nhap diem Toan: "; in >> TS.diemToan;
    cout << "Nhap diem Ly: "; in >> TS.diemLy;
    cout << "Nhap diem Hoa: "; in >> TS.diemHoa;
    TS.diemTB = (TS.diemToan + TS.diemLy + TS.diemHoa) / 3;
    return in;
}   
        
ostream &operator << (ostream &out,const ThiSinh &TS) 
{
    out << "Thong tin thi sinh: " << endl;
    out << "Ho ten: " << TS.hoten;
    out << "Ngay sinh: " << TS.ngaysinh;
    out << "Diem Toan: " << TS.diemToan;
    out << "Diem Ly: " << TS.diemLy;
    out << "Diem Hoa: " << TS.diemHoa;
    out << "Diem TB: " << TS.diemTB;
    return out;
}

bool ThiSinh::operator > (const ThiSinh &TS) 
{
    if(this->diemTB > TS.diemTB) return true;
    return false;
}

bool ThiSinh::operator == (const ThiSinh &TS) 
{
    if(this->diemTB == TS.diemTB) return true;
    return false;
}

bool ThiSinh::operator < (const ThiSinh &TS) 
{
    if(this->diemTB < TS.diemTB) return true;
    return false;
}