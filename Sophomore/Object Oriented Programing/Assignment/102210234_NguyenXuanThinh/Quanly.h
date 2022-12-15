#pragma once
#include <string>
#include "Queue.h"
#include "NhanVien/nhan_vien.h"
#include "NVBienChe/NVBienChe.h"
#include "NVHopDong/NVHopDong.h"

class quanly {
private:
	string tenquanly;
	queue<nhan_vien*> danhsach;
public:
	quanly(string tenquanly = "")
		:tenquanly(tenquanly) {}

	int laysoluongnhanvien() { return danhsach.size(); }

	nhan_vien* timkiem(string& ma);
	nhan_vien** sapxep();

	void themnhanvien();
	void capnhatnhanvien(string& ma);
	void xoanhanvien(string& ma);

	friend ostream& operator << (ostream& out, const quanly& x);
	friend istream& operator >> (istream& in, quanly& x);

	nhan_vien* operator[](int);
	quanly& operator = (string);

private:
	void sort(nhan_vien** x, int low, int high);
	void merge(nhan_vien** x, int low, int mid, int high);
};