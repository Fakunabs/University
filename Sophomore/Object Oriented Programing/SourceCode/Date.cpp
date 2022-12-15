#include <iostream>
using namespace std;
struct Date {
    int d, m, y;
};
istream &operator >>(istream &in, Date &v);
ostream &operator <<(ostream &out, const Date &v);
Date &operator ++ (Date &x); //tiền tố
Date operator ++(Date &x, int);// hậu tố

int main(){
    Date today;
    cout<<"Nhap ngày bất kỳ:"<<endl; cin>>today;
    cout<<"Ngày vừa nhập:"<<today<<endl;
    cout<<"Ngày hôm sau:"<<today++<<endl;
    cout<<"Ngày hôm sau:"<<today<<endl;

    return 0;
}
istream &operator >>(istream &in, Date &v){
    cout<<"Nhap ngày:"; in>>v.d;
    cout<<"Nhap tháng:"; in>>v.m;
    cout<<"Nhap năm:"; in>>v.y;
    return in;
}
ostream &operator <<(ostream &out, const Date &v){
    out<<v.d<<"/"<<v.m<<"/"<<v.y<<endl;
    return out;
}
int sn(int m, int y){
    int songay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y%4==0 && y%100!=0 || y%400==0)
        songay[2] = 29;
    return songay[m];
}
Date &operator ++ (Date &x){ //tiền tố
    if (x.d<sn(x.m, x.y)) x.d++;
    else {
        x.d = 1;
        if (x.m<12) x.m++;
        else {x.m = 1; x.y++;}
    }
    return x;
}
Date operator ++(Date &x, int) {// hậu tố
    Date t = x;
    ++x;
    return t;
}// lag ti
