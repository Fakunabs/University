#include "Quanly.h"

bool tang_dan(string trai, string phai) { return (trai < phai); }
bool giam_dan(string trai, string phai) { return (trai > phai); }

nhan_vien* quanly::operator[](int vitri) {
	try
	{
		if (vitri < 0 || vitri > danhsach.size())
			throw (std::out_of_range("Da ra khoi pham vi danh sach sinh vien"));
	}
	catch (std::exception& except)
	{
		std::cout << except.what() << '\n';

		do
		{
			std::cout << "Nhap lai vi tri: ";
			std::cin >> vitri;
		} while (vitri < 0 || vitri > danhsach.size());
	}

	queue<nhan_vien*> temps = danhsach;

	for (int i = temps.size() - 1; i >= 0; --i)
	{
		if (i == vitri - 1)
		{
			nhan_vien* emp = temps.peek();
			return emp;
		}

		temps.peek();
	}
}

quanly& quanly::operator=(string ten) {
	this->tenquanly = ten;
	return *this;
}

void quanly::themnhanvien() {
	nhan_vien* x;
	bool type;
	cout << "Nhap loai nhan vien(0:NVHopDong, 1:NVBienChe): "; cin >> type;
	if (type) {
		double hesoluong;
		double thamnienlamviec;
		cout << "Nhap he so luong: "; cin >> hesoluong;
		cout << "Tham nien lam viec: "; cin >> thamnienlamviec;

		x = new NVBienChe(hesoluong, thamnienlamviec);
		cin >> *x;
	}
	else {
		double luongcongnhat;
		cout << "Nhap luong cong nhat: "; cin >> luongcongnhat;

		x = new NVHopDong(luongcongnhat);
		cin >> *x;
	}
	danhsach.enqueue(x);
}

void quanly::capnhatnhanvien(string& ma) {
	if (timkiem(ma) == NULL) {
		cout << "Khong tim thay du lieu\n";
		return;
	}

	string ten;
	date ngayvaolam;
	string gioitinh;

	nhan_vien** temp = danhsach.getArray();
	
	for (int i = danhsach.size() - 1; i >= 0; i--) {
		if (temp[i]->lay_manv().compare(ma) == 0) {
			fflush(stdin);
			std::cout << "Ten nhan vien: "; std::cin >> ten;

			fflush(stdin);
			std::cout << "Ngay vao lam: "; std::cin >> ngayvaolam;

			fflush(stdin);
			std::cout << "Gioi tinh: "; std::cin >> gioitinh;

			temp[i]->gan_ten(ten);
			temp[i]->gan_ngayvaolam(ngayvaolam);
			temp[i]->gan_gioitinh(gioitinh.compare("nu") == 0);

			return;
		}
	}
}

nhan_vien** quanly::sapxep() {
	nhan_vien** temp = danhsach.ToArray();
	sort(temp, 0, danhsach.size() - 1);

	return temp;
}

void quanly::xoanhanvien(string& ma) {
	if (timkiem(ma) == nullptr)
	{
		std::cout << "Khong tim thay du lieu!\n";
		return;
	}
	nhan_vien** temp = danhsach.getArray();

	int k;
	for (int i = 0; i < danhsach.size(); ++i)
	{
		if (temp[i]->lay_manv().compare(ma) == 0)
		{
			k = i;
		}
	}

	for (k; k < danhsach.size() - 1; ++k)
	{
		temp[k] = temp[k + 1];
	}

	danhsach.dequeue();
}


void quanly::sort(nhan_vien** temp, int low, int high) {
	int mid;
	if (low < high) {
		mid = (low + high) / 2;
		sort(temp, low, mid);
		sort(temp, mid + 1, high);
		merge(temp, low, mid, high);
	}
}

nhan_vien* quanly::timkiem(string& ma) {
	nhan_vien** nhanvien = danhsach.ToArray();
	sort(nhanvien, 0, danhsach.size() - 1);
	int beg = 0;
	int end = danhsach.size() - 1;
	while (beg <= end)
	{
		int mid = (beg + end) / 2;

		if (nhanvien[mid]->lay_manv().compare(ma) == 0)
		{
			return nhanvien[mid];
		}
		else if (nhanvien[mid]->lay_manv().compare(ma) > 0)
		{
			end = mid - 1;
		}
		else if (nhanvien[mid]->lay_manv().compare(ma) < 0)
		{
			beg = mid + 1;
		}
	}

	return nullptr;
}

void quanly::merge(nhan_vien** temp, int low, int mid, int high) {
	int h, i, j, k;
	h = low;
	i = low;
	j = mid + 1;
	nhan_vien** b = NULL;
	while (h <= mid && j <= high) {
		if (temp[h]->lay_manv() < temp[j]->lay_manv()) {
			b[i] = temp[h];
			h++;
		}
		else {
			b[i] = temp[j];
			j++;
		}
		i++;
	}

	if (h > mid)
		for (k = j; k <= high; k++) {
			b[i] = temp[k];
			i++;
		}
	else
		for (k = h; k <= mid; k++) {
			b[i] = temp[k];
			i++;
		}

	for (k = low; k <= high; k++) {
		temp[k] = b[k];
	}
}