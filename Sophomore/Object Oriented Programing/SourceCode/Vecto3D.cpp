#include <iostream>
using namespace std;
struct Vecto3D {
    int x, y, z;
};
istream &operator >>(istream &in, Vecto3D &v);
ostream &operator <<(ostream &out, const Vecto3D &v);
Vecto3D operator + (const Vecto3D &v1, const Vecto3D &v2);
int main(){
    Vecto3D v1, v2, v3;
    cout<<"Nhap vecto v1:"<<endl; cin>>v1;
    cout<<"Nhap vecto v1:"<<endl; cin>>v2;
    v3 = v1 + v2;
    cout<<"vecto v1 vua nhap:"<<v1<<endl;
    cout<<"vecto v2 vua nhap:"<<v2<<endl;
    cout<<"vecto v3 = v1 + v2:"<<v3<<endl;
    return 0;
}
istream &operator >>(istream &in, Vecto3D &v){
    cout<<"Nhap toa do x:"; in>>v.x;
    cout<<"Nhap toa do y:"; in>>v.y;
    cout<<"Nhap toa do z:"; in>>v.z;
    return in;
}
ostream &operator <<(ostream &out, const Vecto3D &v){
    out<<"("<<v.x<<","<<v.y<<","<<v.z<<")";
    return out;
}
Vecto3D operator + (const Vecto3D &v1, const Vecto3D &v2){
    Vecto3D t;
    t.x = v1.x + v2.x;
    t.y = v1.y + v2.y;
    t.z = v1.z + v2.z;
    return t;
}
