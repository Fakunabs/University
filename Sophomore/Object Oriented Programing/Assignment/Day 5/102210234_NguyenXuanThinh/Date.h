#include <fstream>
#include <iostream>
using namespace std; 

class Date {
    private:
        int ngay;
        int thang;
        int nam;
    public:
        Date();
        Date(int, int, int);
        ~Date();
        int getNgay();
        void setNgay(const int&);
        int getThang();
        void setThang(const int&);
        int getNam();
        void setNam(const int&);
        friend ostream& operator<<(ostream&, const Date&);
        friend istream& operator>>(istream&, Date&);
};