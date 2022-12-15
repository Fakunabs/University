#include <iostream>
using namespace std;
class Hocsinh
{
private:
    string hoten;
    double diemvan;
    double diemtoan;
public:
    Hocsinh(string hoten, int diemvan, int diemtoan);
    Hocsinh(const Hocsinh &HS);
    void Nhap();
    void Xuat();
    string getHoTen();
    double getDiemVan();
    double getDiemToan();
    void setHoTen(string hoten);
    void setDiemVan(double diemvan);
    void setDiemToan(double diemtoan);
    double diemTrungBinh();
    void xepLoai();
};