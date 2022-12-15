#pragma once
#include "nhan_vien.h"

class NVBienChe : public nhan_vien {
private:
	double hesoluong;
	double thamnienlamviec;
	const double luongcoban;
public:
	NVBienChe(double hesoluong = 2.34, double thamnienlamviec = 0, double luongcoban = 1390000);

	void tinhluong() override;
	double lay_hesophucap() const { return thamnienlamviec < 5 ? 0 : (double)thamnienlamviec / 100; }

	void operator()(double hesoluong, double thamnienlamviec);
};