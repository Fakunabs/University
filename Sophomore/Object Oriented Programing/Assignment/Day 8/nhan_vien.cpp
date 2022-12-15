#include "nhan_vien.h"
#include <string.h>

nhan_vien::nhan_vien(string ma, string ten, date ngaybatdau, bool gioitinh, double luong)
	:manv(ma), ten(ten), ngayvaolam(ngayvaolam), gioitinh(gioitinh), luong(luong) {}

istream& operator >>(istream& in, nhan_vien& nhanvien) {
	string ma, ten;
	date ngayvaolam;
	string gioitinh;
	cout << "-------\n";
	do {
		cout << "Ma nhan vien(8 ki tu): "; in >> ma;
	} while (ma.length() > 8);

	if (ma.length() != 8) {
		string sub;
		for (int k = 0; k < 8 - ma.length(); ++k)
			sub.insert(sub.begin(), '0');
		ma = sub + ma;
	}

	fflush(stdin);
	cout << "Ten nhan vien: "; in >> ten;
	fflush(stdin);
	cout << "Ngay vao lam: "; in >> ngayvaolam;
	fflush(stdin);
	cout << "Gioi tinh: "; in >> gioitinh;

	nhanvien.manv = ma;
	nhanvien.ten = ten;
	nhanvien.ngayvaolam = ngayvaolam;
	nhanvien.gioitinh = gioitinh.compare("nu") == 0;

	return in;
}

ostream& operator<<(ostream& out, const nhan_vien& nhanvien) {
	out << "Ma nhan vien: "; out << nhanvien.manv;
	out << "\nTen nhan vien: "; out << nhanvien.ten;
	out << "\nNgay vao lam: "; out << nhanvien.ngayvaolam;
	out << "\nGioi tinh: "; out << (nhanvien.gioitinh ? "nu" : "nam");
	out.precision(10);
	out << "\nLuong: "; out << const_cast<nhan_vien&>(nhanvien).layluong() << endl;

	return out;
}