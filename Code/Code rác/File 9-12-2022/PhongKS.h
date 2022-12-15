#ifndef PHONGKS_H
#define PHONGKS_H
#include <iostream>
#include "Date.h"
using namespace std;
class PhongKS 
{
    private:
        string MaPH;
        int SoNguoi;
        bool TinhTrang;
        Date NgayNhan;
        Date NgayTra;
        double Gia;
    public:
        PhongKS();
        void SetMaPH(string MaPH);
        void SetSoNguoi(int SoNguoi);
        void SetTinhTrang(bool TinhTrang);
        void SetNgayNhan(Date NgayNhan);
        void SetNgayTra(Date NgayTra);
        string getMaPH();
        int getSoNguoi();
        bool getTinhTrang();
        Date getNgayNhan();
        Date getNgayTra();
        double getGia();
        friend istream &operator >> (istream &in, PhongKS &P);
};

#endif