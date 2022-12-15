#include "Date.h"
#include <iostream>
#include <iomanip>
#define leapYear(year) ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ? true : false
using namespace std;

int nummonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int nummonthplus[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

Date::Date() 
{
    this->day = 1;
    this->month = 1;
    this->year = 1900;
}

Date::Date(int day, int month, int year) 
{
    this->year = year;
    if(month >= 1 && month <= 12) 
    {
        this->month = month;
        if(leapYear(year) == true && day >= 1 && day <= nummonthplus[month]) 
        {
             this->day = day;
        }
        else if(leapYear(year) == false && day >= 1 && day <= nummonth[month]) 
        {
            this->day = day;
        }
        else 
        {
            cout << "Sai du lieu !!!" << endl;
        }
    }
    else 
    {
        cout << "Sai du lieu !!!" << endl;
    }
}

Date::Date(const Date &D)  
{
    this->day = D.day;
    this->month = D.month;
    this->year = D.year;
}

istream &operator >> (istream &in, Date &D) 
{
    cout << "Nhap nam : "; in >> D.year;
    do 
    {
        cout << "Nhap thang :"; in >> D.month;
        if(D.month >= 1 && D.month <= 12) 
        {
            bool check = false;
            do 
            {
                cout << "Nhap ngay :"; in >> D.day;
                if(leapYear(D.year) == true && D.day >= 1 && D.day <= nummonthplus[D.month]) 
                {
                    check = true;
                }
                else if(leapYear(D.year) == false && D.day >= 1 && D.day <= nummonth[D.month]) 
                {
                    check = true;
                }
                else 
                {
                    cout << "Sai du lieu !!!" << endl;
                }
            } while (check == false);
        }
        else 
        {
            cout << "Sai du lieu !!!" << endl;
        }
    } while (D.month < 1 || D.month > 12);
    return in;
}

ostream &operator << (ostream &out,const Date &D) 
{
    if(D.year == 0) 
    {
        out << D.day <<"/" << D.month << "/" << "0000";
    }
    else 
    {
        out << D.day <<"/" << D.month << "/" << D.year;
    }
    return out;
}
