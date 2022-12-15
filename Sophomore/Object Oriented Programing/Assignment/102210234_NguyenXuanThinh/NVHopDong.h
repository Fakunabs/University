#pragma once
#include "nhan_vien.h"

class NVHopDong : public nhan_vien {
private:
	double luongcongnhat;
public:
	NVHopDong(double luongcongnhat = 500000)
		:luongcongnhat(luongcongnhat) {}

	void tinhluong() override;

	void operator()(double luonthuongnhat);
};