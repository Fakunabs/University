#include <bits/stdc++.h>
#include "Staff.h"
#include "Member.h"
#include "Product.h"
#include "Detail.h"
#include "Day.h"
#include "Discount.h"
#include "Bill.h"

using namespace std;

string Bill::getID() const
{
    return this->IDBill;
}

Bill Bill::ReadNode(ifstream &file)
{
    string line;
    int d,m,y;
    getline(file,this->IDBill,'|');

    getline(file,this->IDMember,'|');

    file >> d;
    getline(file,line,'/');
    file >> m;
    getline(file,line,'/');
    file >> y;
    getline(file,line,'|');
    Day D(d,m,y);
    this->BillDay=D;

    getline(file,this->IDStaff,'|');

    file >> this->Point;

    file >> this->DiscountRate;

    getline(file,line,'\n');
    return *this;
}
void Bill::SaveNode(ofstream &file) const
{
    file << this->IDBill;
    file << "|";

    file << this->IDMember;
    file << "|";

    Day D=this->BillDay;

    file << D.getDay();
    file << "/";

    file << D.getMonth();
    file << "/";

    file << D.getYear();
    file << "|";

    file << this->IDStaff;
    file << "|";

    file << this->Point << " " << this->DiscountRate ;
}


float Bill::Cash(string s,LinkedList<Detail> &D)
{
    float t=0;
    Node<Detail> *p=D.getHead();
    Detail node_cur;
    while (p!=NULL)
    {
        node_cur=p->getNode();
        if(node_cur.getID()==s)
        {
            t+=(node_cur.getAmount()*node_cur.getPrice());
        }
        p=p->getNext();
    }
    return t;
}


Bill Bill::CreateBill(string MaNV,LinkedList<Bill> &B,LinkedList<Product> &P,LinkedList<Detail> &Dl,LinkedList<Member> &M,const Discount &Ds)
{
    string maHD,maTV,s;
    int sl,diem=0;
    float mucCK=Ds.getDiscountRate();
    do{
        cout << "Nhap ma hoa don:";
        cin >> maHD;
    }while (B.CheckID(maHD)==true);
    Day D;
    cout << "Ngay nhap hoa don:" << endl;
    cin >> D;

    do {
        do {
            cout << "Nhap ma san pham(nhap 0 de dung):";
            cin >> s;
            if (s=="0") break;
        }while (!P.CheckID(s));
        if (s=="0") break;
        Product p=P.getNode(s); //
        do {
            cout << "Nhap so luong:";
            cin >> sl;
        }while (sl>p.getAmount() || sl<=0);
        p.UpDateAmount(-sl);
        P.UpDateNode(s,p);
        Detail myP(maHD,s,sl,p.getPrice());
        Dl.InsertNodeAfter(myP);
    } while (1);

    do {
        cout << "Nhap ma thanh vien(nhap 0 de thanh toan ngay):" ;
        cin >> maTV;
    }while(maTV!="0" && M.CheckID(maTV)==false);

    Bill tempbill;
    float t=tempbill.Cash(maHD,Dl);
    cout << "Tong tien:" << t << endl;

    if (maTV=="0")
        diem=0;
    else{
        Member m=M.getNode(maTV);

        cout << "Diem cua ban la:" << m.getPoint() << endl;
        cout << "Muc chiet khau moi diem:" << Ds.getDiscountRate() << endl;
        do {
            cout << "Nhap muc diem quy doi:" ;
            cin >> diem;
        } while (diem<0 || Ds.Change(diem) >= t || diem>m.getPoint());

        m.UpDatePoint(-diem);

        int new_diem=Ds.CashToPoint(t);
        m.UpDatePoint(new_diem);
        M.UpDateNode(maTV,m);
    }

    cout << "Thanh tien:" << t-Ds.Change(diem) << endl;

    Bill b(maHD,maTV,D,MaNV,diem,mucCK);
    B.InsertNodeAfter(b);
    *this=b;
    return *this;
}

void Bill::printfIntro() const
{
    cout << left << setw(15) << "Ma hoa don" ;
    cout << left << setw(20) << "Ma thanh vien" ;
    cout << left << setw(14) << "Ngay lap HD" ;
    cout << left << setw(15) << "Ma nhan vien" << endl ;
//    cout << left << setw(10) << "Diem" ;
//    cout << left << setw(10) << "Chiet khau" << endl;
 //   cout << left << setw(10) << "Thanh toan" << endl;
}
void Bill::printfNode() const
{
    cout << left << setw(15) << this->IDBill ;
    cout << left << setw(20) << this->IDMember;
    cout << this->BillDay;
    cout << left << setw(15) << this->IDStaff << endl;
//    cout << left << setw(10) << this-> << endl;
 //   cout << left << setw(10) << this->Point;
  //  cout << left << setw(10) << this->DiscountRate << endl;
}
