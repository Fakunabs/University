#include "Date.h"
#include <string>

class NhanVien {
    private:
        string maNV;
        string tenNV;
        Date ngayBatDau;
        bool gioiTinh;
        double luong;
    public:
        NhanVien(string, string, Date, bool, double);
        NhanVien();
        ~NhanVien();
        string getMaNV();
        void setMaNV(const string&);
        string getTenNV();
        void setTenNV(const string&);
        Date getDate();
        void setDate(const Date&);
        bool getGioiTinh();
        void setGioiTinh(const bool&);
        double getLuong();
        void setLuong(const double&);
        friend istream& operator>>(istream&, NhanVien&);
        friend ostream& operator<<(ostream&, const NhanVien&);
};