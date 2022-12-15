#include "PhongVIP.h"


PhongVIP::PhongVIP() : PhongKS()
{
    this->Dongia = 0;
    this->Phuthu = 0;
}
        
void PhongVIP::setDongia() 
{
    if(this->getMaPH().front() == '1') 
    {
        this->Dongia = 700000;
    }
    else if(this->getMaPH().front() == '2') 
    {
        this->Dongia = 650000;
    }
    else if(this->getMaPH().front() == '3') 
    {
        this->Dongia = 600000;
    }
    else if(this->getMaPH().front() == '4') 
    {
        this->Dongia = 550000;
    }
    else if(this->getMaPH().front() == '5') 
    {
        this->Dongia = 500000;
    }
}

double PhongVIP::getDongia() 
{
    return Dongia;
}
        
void PhongVIP::setPhuthu() 
{
    this->Phuthu = this->getSoNguoi() / 10;
}
        
double PhongVIP::getPhuthu() 
{
    return Phuthu;
}
        
double PhongVIP::getGia() 
{
    return this->Dongia * getSoNguoi() + this->Phuthu * this->Dongia;
}
