#include "VanDongVien.h"

VanDongVien::VanDongVien()
{

}
VanDongVien::VanDongVien(string hoten, int tuoi, string monthidau, float cannang, float chieucao)
{
    this->hoten = hoten;
    this->tuoi = tuoi;
    this->monthidau = monthidau;
    this->cannang = cannang;
    this->chieucao = chieucao;
}
VanDongVien::~VanDongVien()
{
    this->hoten = this->monthidau ="";
    this->tuoi = 0;
    this->cannang = this->chieucao = 0;
}
istream &operator >> (istream &in, VanDongVien &v)
{
    cin.ignore();
    cout << "Nhap Ho Ten: "; in >> v.hoten;
    cout << "Nhap Mon Thi Dau: "; in >> v.monthidau;
    cout << "Nhap Tuoi: "; in >> v.tuoi;
    cout << "Nhap Can Nang: "; in >> v.cannang;
    cout << "Nhap Chieu Cao: "; in >> v.chieucao;
    return in;
}
ostream &operator << (ostream &out, VanDongVien v)
{
    out << "Ho Ten: " << v.hoten << endl;
    out << "Mon Thi Dau: " <<v.monthidau << endl;
    out << "Tuoi: " << v.tuoi << endl;
    out << "Can Nang: " << v.cannang << endl;
    out << "Chieu cao: " << v.chieucao << endl;
    return out;
}
bool VanDongVien::operator > (const VanDongVien &v)
{
    if (this->chieucao > v.chieucao)
            return true;
        else if (this->chieucao < v.chieucao)
            return false;
        else if (this->cannang > v.cannang)
            return true;
        else
            return false;
}
