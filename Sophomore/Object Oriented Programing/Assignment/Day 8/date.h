#pragma once
#include <iostream>
using namespace std;

class date {
private:
	int ngay;
	int thang;
	int nam;
public: 
	date();

	friend istream& operator >>(istream&, date&);
	friend ostream& operator <<(ostream&,const date&);
};
