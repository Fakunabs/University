#pragma once 
#include <bits/stdc++.h>

using namespace std;

class Subject
{
private:
    string nameSub;
    double point;
    int numberCredit;
    long money;

public:
    Subject();
    Subject(string nameSub, double point, int numberCredit, long money);
    string getNameSub();
    double getPoint();
    int getNumberCredit();
    long getMoney();
    void display();
};

Subject::Subject()
{
}
Subject::Subject(string name, double point, int numberCredit, long money)
{
    this->nameSub = nameSub;
    this->point = point;
    this->numberCredit = numberCredit;
    this->money = money;
}
string Subject::getNameSub()
{
    return nameSub;
}
double Subject::getPoint()
{
    return point;
}
int Subject::getNumberCredit()
{
    return numberCredit;
}
long Subject::getMoney()
{
    return money;
}
void Subject::display()
{
    cout << "Name Subject: " << this->nameSub << endl;
    cout << "Number Credit: " << this->numberCredit << endl;
    cout << "Money Of One Credit: " << this->money << endl;
}
