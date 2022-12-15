#ifndef QUANLY_H
#define QUANLY_H
#include <iostream>
#include "PhongBT.h"
#include "PhongVIP.h"
#include "Node.h"

using namespace std;

template <typename T>
class linkedlist;

class Quanly
{
    private:
        linkedlist<PhongBT> lphongbt;
        linkedlist<PhongVIP> lphongvip;
        int soluong;
    public:
        Quanly();
        int getSoluong();
        void Displaybt();
        void Displayvip();
        void Addbt(); 
        void Addvip();
        void Delbt();
        void Delvip();
        void sapxepbt();
        void timkiembt();
        void sapxepvip();
        void timkiemvip();
        void capnhatbt();
        void capnhatvip();
        void menuBT();
        void menuVIP();
};
#endif