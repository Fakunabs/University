#include "PhongBT.h"


PhongBT::PhongBT() : PhongKS()
{
    this->Dongia = 0;
}
void PhongBT::setDongia() 
{
    if(this->getMaPH().front() == '1') 
    {
        this->Dongia = 500000;
    }
    else if(this->getMaPH().front() == '2') 
    {
        this->Dongia = 450000;
    }
    else if(this->getMaPH().front() == '3') 
    {
        this->Dongia = 400000;
    }
    else if(this->getMaPH().front() == '4') 
    {
        this->Dongia = 350000;
    }
    else if(this->getMaPH().front() == '5') 
    {
        this->Dongia = 300000;
    }
}
double PhongBT::getDongia() 
{
    return Dongia;
}

double PhongBT::getGia() 
{
    return Dongia * getSoNguoi();
}