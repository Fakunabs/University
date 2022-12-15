#ifndef Product_h
#define Product_h

#include <bits/stdc++.h>
#include "LinkedList.h"

using namespace std;


class Product{
    string IDProduct;
    string NameProduct;
    string IDCategory;
    int amount; // so luong san pham
    float Price; // don gia 1 san pham
public:
    Product(){};
    Product(string IDProduct,string NameProduct,string IDCategory,int amount,float Price);
    Product(const Product &p);
    ~Product(){};
    string getID() const;
    int getAmount() const;
    float getPrice() const;
    void UpDateAmount(int amount);
    Product ReadNode(ifstream &file);
    void SaveNode(ofstream &file) const;
    friend istream &operator>>(istream &in,LinkedList<Product> &P);
    void printfIntro() const;
    void printfNode() const;
};

#endif // Product_h
