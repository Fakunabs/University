#include "NVBienChe.h"

NVBienChe::NVBienChe(double hesoluong, double thamnienlamviec, double luongcoban)
	:hesoluong(hesoluong), thamnienlamviec(thamnienlamviec), luongcoban(luongcoban)
{
	try
	{
		if (hesoluong < 2.34 || hesoluong > 10)
			throw (out_of_range("He so luong ra khoi khoang [2.34, 10]"));
	}
	catch (exception& a)
	{
		cout << a.what() << endl;
		do
		{
			cout << "Nhap lai he so luong: ";
			cin >> hesoluong;
		} while (hesoluong < 2.34 || hesoluong > 10);

		this->hesoluong = hesoluong;
	}
}

void NVBienChe::tinhluong() {
	luong = (hesoluong * luongcoban) * (1 + lay_hesophucap());
}

void NVBienChe::operator()(double hesoluong, double thamnienlamviec) {
	this->hesoluong = hesoluong;
	this->thamnienlamviec = thamnienlamviec;
}