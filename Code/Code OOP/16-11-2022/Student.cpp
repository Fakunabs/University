#include "Subject.cpp"

class Student
{
private:
    string id;
    string name;
    vector<Subject> s;

public:
    Student();
    Student(string id, string name, vector<Subject> s);
    string getId();
    string getName();
    vector<Subject> getS();
    long getSumMoney();
    double avgPoint();
    void display();
};

Student::Student()
{
}
Student::Student(string id, string name, vector<Subject> s) : id(id), name(name), s(s)
{
}
string Student::getId()
{
    return id;
}
string Student::getName()
{
    return name;
}
vector<Subject> Student::getS()
{
    return s;
}
long Student::getSumMoney()
{
    long sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i].getNumberCredit() * s[i].getMoney();
    }
    return sum;
}
double Student::avgPoint()
{
    double point = 0;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        point += s[i].getNumberCredit() * s[i].getPoint();
        sum += s[i].getNumberCredit();
    }
    return point / sum;
}
void Student::display()
{
    cout << "Id: " << this->id << endl;
    cout << "Name Student: " << this->name << endl;
    cout << "List Subject" << endl;
    for (int i = 0; i < s.size(); i++)
    {
        s[i].display();
    }
    cout << "Sum Money Have To Pay: " << this->getSumMoney() << endl;
    cout << "Average Point: " << this->avgPoint() << endl;
}