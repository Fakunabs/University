#ifndef VECTO_H
#define VECTO_H

class Vecto 
{
    private:
        int n;
        double *data;
    public:
        Vecto(int n = 2);
        Vecto(const Vecto &V);
        Vecto(double a[], int n);
        ~Vecto();
        void Nhap();
        void Xuat();
        double TinhDoDai();
        Vecto Tong(Vecto V); 
        double TichVoHuong(Vecto V);
        double TruyXuat(int i);
};

#endif