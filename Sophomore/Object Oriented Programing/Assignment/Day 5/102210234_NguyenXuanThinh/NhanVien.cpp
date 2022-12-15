#include "NhanVien.h"

NhanVien::NhanVien(string maNV, string tenNV, Date ngayBatDau, bool gioiTinh, double luong) {
    this->maNV = maNV;
    this->tenNV = tenNV;
    this->ngayBatDau = ngayBatDau;
    this->gioiTinh = gioiTinh;
    this->luong = luong;
}

NhanVien::NhanVien() {}

NhanVien::~NhanVien() {}

string NhanVien::getMaNV() {
    return this->maNV;
}

void NhanVien::setMaNV(const string& maNV) {
    this->maNV = maNV;
}

string NhanVien::getTenNV() {
    return this->tenNV;
}

void NhanVien::setTenNV(const string& tenNV) {
    this->tenNV = tenNV;
}

Date NhanVien::getDate() {
    return this->ngayBatDau;
}

void NhanVien::setDate(const Date& ngayBatDau) {
    this->ngayBatDau = ngayBatDau;
}

bool NhanVien::getGioiTinh() {
    return this->gioiTinh;
}

void NhanVien::setGioiTinh(const bool& gioiTinh) {
    this->gioiTinh = gioiTinh;
}

double NhanVien::getLuong() {
    return this->luong;
}

void NhanVien::setLuong(const double& luong) {
    this->luong = luong;
}