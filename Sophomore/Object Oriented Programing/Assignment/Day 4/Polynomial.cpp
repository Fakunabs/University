#include <iostream> // Mảng động

using namespace std;

class Dathuc // ppsinh pp quay lui pp djakia
{
    private:
        int n;
        double *data;
    public:
        Dathuc(int n = 1);
        Dathuc(double a[],int n);
        Dathuc(const Dathuc &P);
        ~Dathuc();
        friend istream &operator >> (istream &in, Dathuc &P);
        friend ostream &operator << (ostream &out,const Dathuc &P); 
        double &operator [] (int i) const;
        double operator () (double x);
        Dathuc operator + (const Dathuc &P);
        Dathuc operator - (const Dathuc &P);
        Dathuc operator = (const Dathuc &P);
};

Dathuc::Dathuc(int n) 
{
    this->n = n;
    data = new double[n];
}

Dathuc::Dathuc(double a[],int n) 
{
    this->n = n;
    data = new double[n];
    for(int i = 0; i < this->n; i++) 
    {
        data[i] = a[i];
    }
}

Dathuc::Dathuc(const Dathuc &P) 
{
    this->n = P.n;
    data = new double[n];
    for(int i = 0; i < n; i++) 
    {
        data[i] = P[i];
    }
}

Dathuc::~Dathuc() 
{
    delete []data;
}

istream &operator >> (istream &in, Dathuc &P) 
{

    for(int i = P.n-1; i >= 0; i--) 
    {
        cout << "Nhap he so thu " << i << " : " ;
        in >> P[i];
    }
    return in;
}

ostream &operator << (ostream &out,const Dathuc &P) 
{
    cout << "Da thu la : " << endl;
    out << P[P.n-1] << "x^" <<P.n-1;
    for(int i = P.n - 2; i >= 1; i--) 
    {
        if(P[i] >= 0) 
        {
            out << " + " << P[i] << "x^" <<i ;
        }
        else 
        {
            out << endl << P[i] << "x^" <<i;
        }
    }
        if(P[0] >= 0) 
        {
            out << " + " << P[0];
        }
        else 
        {
            out << endl << P[0];
        }
    out << endl;
    return out;
}

double &Dathuc::operator [] (int i) const 
{
    if(i >= 0 && i <= n-1)
    {
        return data[i];
    }
    else 
    {
        cout << "Khong co he so nay !!!";
    }
}

double Dathuc::operator () (double x) 
{
    double P = 0;
    for(int i = 0; i < n; i++) 
    {
        P += data[i]*x;
    }
    return P;
}

Dathuc Dathuc::operator + (const Dathuc &P) 
{
    Dathuc T(P.n);
    for(int i = 0; i < n; i++) 
    {
        T[i] = data[i] + P[i];
    }
    return T;
}

Dathuc Dathuc::operator - (const Dathuc &P) 
{
    Dathuc T(P.n);
    for(int i = 0; i < n; i++) 
    {
        T[i] = data[i] - P[i];
    }
    return T;
}

Dathuc Dathuc::operator = (const Dathuc &P) 
{
    if(this != &P) 
    {
        this->n = P.n;
        data = new double[n];
        for(int i = 0; i < n; i++) 
        {
            data[i] = P[i];
        }
    }
    return *this;
}


int main() 
{
    double a[] = {1.2,3.5,5.6,7.9,8.0,9.0,10.0};
    int n = sizeof(a)/sizeof(double);
    Dathuc J(a,n);
    cout << J;
    Dathuc K(4);
    cin >> K;
    cout << K;
    Dathuc M(4);
    cin >> M;
    cout << M;
    Dathuc T(4);
    cout << K-M;
    cout << K+M;
    T = M;
    cout << T;
    cout << "He so la : " << T[2] << endl;
    cout << "Gia tri P(x) = " << T(2) << endl; 
    return 0;
}
