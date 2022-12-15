// Cài đặt lớp Vecto để biểu diễn 01 vecto trong không gian n chiều
// gồm n là số chiều của vecto, data là 01 mảng động chứa tọa độ của vecto.
// Định nghĩa các hàm dựng, dựng sao chép, hủy; 
//các thao tác trên vecto: nhập, xuất, 
//tính tổng, hiệu, tích vô hướng 2 vecto
//truy xuất 01 phần tử của vecto
#include <iostream>
using namespace std;
class Vecto {
    int n; //số chiều
    double *data;
    public:
        Vecto(int m = 3);
        ~Vecto();
        Vecto(const Vecto &x);
        void Nhap();
        void xuat();
        Vecto Tong(const Vecto &x);
        Vecto operator + (const Vecto &a);
        const Vecto &operator = (const Vecto &x);
        double &operator [] (int i) const;
        friend istream &operator >>(istream &in, Vecto &a);
        friend ostream &operator <<(ostream &out, const Vecto &a);
};
Vecto::Vecto(int m):n(m){
    data = new double [n];
}
Vecto::~Vecto(){
    delete [] data;
}
Vecto::Vecto(const Vecto &x):n(x.n){
    data = new double [n];
    for(int i=0; i<n; i++)
        data[i] = x[i];
}
void Vecto::Nhap(){
    for(int i=0; i<n; i++){
        cout<<"Tọa độ thứ "<<i<<":";
        cin>>data[i];
    }
}
void Vecto::xuat(){
    for(int i=0; i<n; i++)
        cout<<data[i]<<endl;
    cout<<endl;
}
Vecto Vecto::Tong(const Vecto &x){
    Vecto t(x);
    for(int i=0; i<n; i++)
        t[i] += data[i];
    return t; 

}
istream &operator >>(istream &in, Vecto &a){
    for(int i=0; i<a.n; i++){
        cout<<"Tọa độ thứ "<<i<<":";
        in>>a[i];
    }
    return in;
}
ostream &operator <<(ostream &out, const Vecto &a){
    out<<"(";
    int i;
    for(i=0; i<a.n-1; i++)
        out<<a[i]<<",";
    out<<a[i]<<")"<<endl;
    return out;
}
Vecto Vecto::operator + (const Vecto &a){
    Vecto t(a);
    for(int i=0; i<n; i++)
        t[i] += data[i];
    return t; 
}
const Vecto &Vecto::operator = (const Vecto &x){
    if (this != &x){
        n = x.n;
        delete [] data;
        data = new double [n];
        for(int i=0; i<n; i++)
            data[i] = x[i];//x.operator[](i)
    }
    return *this;
}
double &Vecto::operator [] (int i) const{
    return data[i];
}
int main(){
    Vecto a, b;
    cout<<"Nhập vecto a:"<<endl;
    cin>>a;
    cout<<"Nhập vecto b:"<<endl;
    cin>>b ;
    cout<<"Vecto a vừa nhập: "<<a;
    cout<<"Vecto b vừa nhập: "<<b;
    // cout<<"a = b:"<<a;
    // a.Nhap();
    // a.xuat();
    // b.Nhap();
    // b.xuat();
    //a.Tong(b).xuat();
    Vecto c;
    c = a + b;

    Vecto d = a + b;
    
    cout<<"Tổng a + b:"<<c;
    return 0;
}
