#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int ngay, int thang, int nam) {
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
}

Date::Date() {}

Date::~Date() {}

int Date::getNgay() {
    return this->ngay;
}

void Date::setNgay(const int& ngay) {
    this->ngay = ngay;
}

int Date::getThang() {
    return this->thang;
}

void Date::setThang(const int& thang) {
    this->thang = thang;
}

int Date::getNam() {
    return this->nam;
}

void Date::setNam(const int& nam) {
    this->nam = nam;
}