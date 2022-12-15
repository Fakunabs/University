#include <iostream>
#include "Point.h"
using namespace std;
Point::Point(int xx, int yy){
    x = xx;
    y = yy;
}
void Point::SetPt(int x, int y){
    Point::x = x;
    this->y = y;
}
void Point::Display(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}   
Point::~Point(){
    cout<<"Huy bo đoi tuong.("<<x<<","<<y<<")"<<endl;
}

