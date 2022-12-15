#include "NhanVien.h"

class List {
    private: 
        NhanVien *NV;
        int soLuong;
    public:
        List();
        ~List();
        int getSoLuong();
        void setSoLuong(const int&);
        void show();
        void addNV(NhanVien, int);
        void addNVFirst(NhanVien);
        void addNVLast(NhanVien);
        void removeNV(int);
        void removeNVFirst();
        void removeNVLast();
        void updateNV(const string&);
        int interpolation_search(double);
        void merge(int, int, int, bool (double, double));
        void mergeSort_Luong(int, int, bool ComFunc(double, double));
        friend bool ascending(double, double);
        friend bool descending(double, double);
        NhanVien& operator[](const int&);
};