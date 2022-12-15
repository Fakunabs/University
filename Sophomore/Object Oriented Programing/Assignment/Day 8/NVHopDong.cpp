#include "NVHopDong.h"

void NVHopDong::tinhluong() {
	const int songaylamviec = 20;
	luong = luongcongnhat * songaylamviec;
}

void NVHopDong::operator()(double luongcongnhat) {
	this->luongcongnhat = luongcongnhat;
}