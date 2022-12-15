#ifndef PHONGBT_H
#define PHONGBT_H
#include <iostream>
#include "PhongKS.h"
using namespace std;

template <typename T>
class linkedlist;

class PhongBT : public PhongKS 
{
    private:
        double Dongia;
    public:
        PhongBT();
        void setDongia();
        double getDongia();
        double getGia();
};

#endif