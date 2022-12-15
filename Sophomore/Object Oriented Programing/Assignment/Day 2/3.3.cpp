#include<iostream>
#include<string>
using namespace std;

class Hocsinh {
private:
    char hoten[30];
    double diemvan;
    double diemtoan;
public:
    Hocsinh(char hoten, double diemvan, double diemtoan);
    Hocsinh(const Hocsinh &HS);
    void Nhap();
    void xuat();
    char getHoten();
    double getDiemvan();
    double getDiemtoan();
    void setHoten(char hoten);
    void setDiemvan(double diemvan);
    void setDiemtoan(double diemtoan);
    double diemTB();
    void xeploai();
    ~Hocsinh();
};

Hocsinh::Hocsinh(char hoten, double diemvan, double diemtoan) {
    this->hoten =hoten;
    this->diemvan = diemvan;
    this->diemtoan = diemtoan;
}

Hocsinh::Hocsinh(const Hocsinh &HS) {
    this->hoten = HS.hoten;
    this->diemvan = HS.diemvan;
    this->diemtoan = HS.diemtoan;
}

void Hocsinh::Nhap() {
    cout << "Nhap ho ten: " << endl;
    cin >> hoten;
    cout << "Nhap diem van: " << endl;
    cin >> diemvan;
    cout << "Nhap diem toan: " << endl;
    cin >> diemtoan;
}

void Hocsinh::xuat() {
    cout << "Ho ten: " << hoten << endl;
    cout << "Diem van: " << diemvan << endl;
    cout << "Diem toan: " << diemtoan << endl;
}

char Hocsinh::getHoten() {
    return hoten;
}

double Hocsinh::getDiemvan() {
    return diemvan;
}

double Hocsinh::getDiemtoan() {
    return diemtoan;
}

void Hocsinh::setHoten(char hoten) {
    this->hoten,hoten;
}

void Hocsinh::setDiemvan(double diemvan) {
    this->diemvan = diemvan;
}

void Hocsinh::setDiemtoan(double diemtoan) {
    this->diemtoan = diemtoan;
}

double Hocsinh::diemTB() {
    return (diemtoan*diemvan) / 2;
}

void Hocsinh::xeploai() { 
    if(diemTB() >= 8.0) cout << "Gioi" << endl;
    else if(diemTB() >= 7.0) cout << "Kha" << endl;
    else if(diemTB() >= 5.0) cout << "Trung binh" << endl;
    else cout << "Yeu" << endl;
}

int main() {
    Hocsinh HS(Truong,8.0,8.0);
    HS.xuat();
}