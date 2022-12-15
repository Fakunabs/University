#include "date.h"

date::date() {
	ngay = 0;
	thang = 0; 
	nam = 0;
}

istream& operator >>(istream& in, date& x) {
	r1 : cout << "Nhap ngay: ";
	in >> x.ngay;
	if (0 < x.ngay and x.ngay <= 31) {
	r2 : cout << "Nhap thang: ";
	in >> x.thang;
	if (0 < x.thang and x.thang < 13) {
		if ((x.thang == 4 || x.thang == 6 || x.thang == 9 || x.thang == 11) and (x.ngay > 30)) {
			cout << "thang " << x.thang << " khong co ngay 31 vui long nhap lai\n";
			goto r1;
		}
		else if (x.thang == 2 and x.ngay > 29) {
			cout << "thang 2 chi co 28-29 ngay vui long nhap lai\n";
			goto r1;
		}
	}
	else {
		cout << "thang khong hop le vui long nhap lai\n";
		goto r2;
	}
	cout << "Nhap nam: ";
	in >> x.nam;
	if (x.nam % 400 and x.thang == 2 and x.ngay > 28) {
		cout << "nam " << x.nam << " thang 2 chi co 28 ngay vui long nhap lai\n";
		goto r1;
		}
	}
	else {
		cout << "ngay khong hop le, vui long nhap lai\n";
		goto r1;
	}

	return in;
}

ostream& operator <<(ostream& out,const date& x) {
	out << x.ngay << "/" << x.thang << "/" << x.nam;
	return out;
}