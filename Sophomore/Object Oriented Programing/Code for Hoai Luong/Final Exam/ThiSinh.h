#ifndef THISINH_H
#define THISINH_H
#include "Date.h"

class ThiSinh 
{
    private:
        string hoten;
        Date ngaysinh;
        double diemToan, diemLy, diemHoa, diemTB;
    public:
        ThiSinh(Date ngaysinh, string hoten = "Nguyen Van A", double diemToan = 0.0, double diemLy = 0.0, double diemHoa = 0.0);
        friend istream &operator >> (istream &in, ThiSinh &TS);    
        friend ostream &operator << (ostream &out,const ThiSinh &TS); 
        ThiSinh operator = (const ThiSinh &TS);
        bool operator > (const ThiSinh &TS);
        bool operator == (const ThiSinh &TS);
        bool operator < (const ThiSinh &TS);
}; 


#endif