#include <bits/stdc++.h>
#include "Category.h"

using namespace std;


Category::Category(string IDCategory,string NameCategory)
{
    this->IDCategory=IDCategory;
    this->NameCategory=NameCategory;
}

Category::Category(const Category &p)
{
    this->IDCategory=p.IDCategory;
    this->NameCategory=p.NameCategory;
}


string Category::getID() const
{
    return this->IDCategory;
}

Category Category::ReadNode(ifstream &file)
{
    string line;
    getline(file,this->IDCategory,'|');

    getline(file,this->NameCategory,'|');

    getline(file,line,'\n');

    return *this;
}

void Category::SaveNode(ofstream &file) const
{
    file << this->IDCategory;
    file << "|";
    file << this->NameCategory;
    file << "|";
}

istream &operator>>(istream &in,LinkedList<Category> &C)
{
    string s1,s2;
    do {
        cout << "Nhap ma loai:";
        getline(cin,s1);
    } while (C.CheckID(s1)==true);
    cout << "Nhap ten loai:";
    getline(cin,s2);

    Category c(s1,s2);
    C.InsertNodeAfter(c);
    return in;
}

void Category::printfIntro() const
{
    cout << left << setw(10) << "Ma loai";
    cout << left << setw(30) << "Ten loai";
    cout << endl;
}

void Category::printfNode() const
{
    cout << left << setw(10) << this->IDCategory ;
    cout << left << setw(30) << this->NameCategory;
    cout << endl;
}
