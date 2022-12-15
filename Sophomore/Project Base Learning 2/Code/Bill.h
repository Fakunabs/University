#ifndef Bill_h
#define Bill_h
#include <bits/stdc++.h>
#include "Staff.h"
#include "Member.h"
#include "Product.h"
#include "Detail.h"
#include "Day.h"
#include "Discount.h"
#include "LinkedList.h"

using namespace std;

class Bill{
private:
    string IDBill;
    string IDMember;
    Day BillDay;
    string IDStaff;
    int Point;
    float DiscountRate;
public:
    Bill(){};
    Bill(string IDBill,string IDMember,Day D,string IDStaff,int Point,float DiscountRate):
IDBill(IDBill),IDMember(IDMember),BillDay(D),IDStaff(IDStaff),Point(Point),DiscountRate(DiscountRate){};
    ~Bill(){};
    string getID() const;
    float Cash(string s,LinkedList<Detail> &D);
    Bill CreateBill(string MaNV,LinkedList<Bill> &,LinkedList<Product> &P,LinkedList<Detail> &MyP,LinkedList<Member> &M,const Discount &Ds);
    Bill ReadNode(ifstream &file);
    void SaveNode(ofstream &file) const;
    void printfIntro() const;
    void printfNode() const;
};


#endif // Bill_h

