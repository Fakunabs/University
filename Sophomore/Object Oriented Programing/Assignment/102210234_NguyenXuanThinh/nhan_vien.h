#pragma once
#include "date.h"

class nhan_vien {
protected:
	string manv;
	string ten;
	date ngayvaolam;
	bool gioitinh;
	double luong;
public:
	nhan_vien() = default;
	nhan_vien(string, string, date, bool, double);

	string lay_manv() const { return manv; }
	string lay_ten() const { return ten; }
	date lay_ngayvaolam() const { return ngayvaolam; }
	bool lay_gioitinh() const { return gioitinh; }
	double layluong() { tinhluong(); return luong; }

	void gan_manv(const string _manv) { manv = _manv; }
	void gan_ten(const string _ten) { ten = _ten; }
	void gan_ngayvaolam(const date& _ngayvaolam) { ngayvaolam = _ngayvaolam; }
	void gan_gioitinh(bool _gioitinh) { gioitinh = _gioitinh; }
	void gan_luong(double _luong) { luong = _luong; }

	virtual void tinhluong() = 0;

	friend istream& operator>>(istream&, nhan_vien&);
	friend ostream& operator<<(ostream&, const nhan_vien&);
};
