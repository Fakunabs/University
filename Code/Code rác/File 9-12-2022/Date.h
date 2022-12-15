#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date 
{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int day, int month, int year);
        Date(const Date &D);
        friend istream &operator >> (istream &in, Date &D);    
        friend ostream &operator << (ostream &out,const Date &D); 
        Date operator = (const Date &D);
        bool operator > (const Date &D);
        bool operator == (const Date &D);
        bool operator < (const Date &D);
};
#endif