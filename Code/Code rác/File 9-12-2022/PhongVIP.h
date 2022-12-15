#ifndef PHONGVIP_H
#define PHONGVIP_H
#include <iostream>
#include "PhongKS.h"
using namespace std;

template <typename T>
class linkedlist;

class PhongVIP : public PhongKS
{
    private:
        double Dongia;
        double Phuthu;
    public:
        PhongVIP();
        void setDongia();
        double getDongia();
        void setPhuthu();
        double getPhuthu();
        double getGia();
};
#endif