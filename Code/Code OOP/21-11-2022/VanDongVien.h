#ifndef VanDongVien_h
#define VanDongVien_h
#include <bits/stdc++.h>

using namespace std;

class VanDongVien 
{
protected:
    string hoten;
    int tuoi;
    string monthidau;
    float cannang;
    float chieucao;
public:
    VanDongVien();
    VanDongVien(string hoten, int tuoi, string monthidau, float cannang, float chieucao);
    ~VanDongVien();
    friend istream &operator >> (istream &in, VanDongVien &v);
    friend ostream &operator << (ostream &out, VanDongVien v);
    bool operator > (const VanDongVien &v);
};
#endif
