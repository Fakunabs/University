#include <iostream>
using namespace std;

class SET 
{
    private:
        int n;
        int *data;
        int size;
    public:
        SET(int size);
        SET(int a[],int n);
        SET(const SET &S);
        ~SET();
        friend ostream &operator << (ostream &out,const SET &S);
        SET operator + (int data);
        SET operator - (int data);
        SET operator + (const SET &S);
        SET operator - (const SET &S);
        SET operator * (const SET &S);
        void operator () (int data);
        int &operator [] (int i) const;
        SET operator = (const SET &S);
};

SET::SET(int size) 
{
    this->n = 0;
    this->size = size;
    data = new int[size];
}

SET::SET(int a[], int n) 
{
    this->n = n;
    this->size = this->n;
    data = new int[size];
    for(int i = 0; i < this->n; i++) 
    {
        data[i] = a[i];
    }
}

SET::SET(const SET &S) 
{
    this->n = S.n;
    this->size = S.size;
    data = new int[size];
    for(int i = 0; i < n; i++) 
    {
        data[i] = S[i];
    }
}

SET::~SET() 
{
    delete []data;
}

ostream &operator << (ostream &out, const SET &S) 
{
    out << "(";
    for(int i = 0; i < S.n-1; i++) 
    {
        out << S[i] << ",";
    }
    if(S.n > 0) 
    {
    out << S[S.n-1] << ")" <<endl;
    }
    else cout << "rong" << ")" << endl;
    return out;
}

SET SET:: operator + (int data) 
{
    if(this->n < size) 
    {
        this->n += 1;
        this->data[n-1] = data;
    }
    else cout << "Tap hop da dat den gioi han !!!" << endl;
    return *this;
}

SET SET::operator - (int data) 
{
    if(this->n > 0) 
    {
    int c = 0;
    for(int i = 0; i < this->n; i++) 
    {
        if(this->data[i] == data) 
        {
            c = 1;
            for(int j = i; j < n-1; j++) 
            {
                this->data[j] = this->data[j+1];
            }
        }
    }
    if(c == 0) cout << "Khong co phan tu nay !!!" << endl;
    this->n -= 1;
    }
    else cout << "Tap hop rong !!!" << endl;
    return *this;
}

SET SET::operator + (const SET &S) 
{
    SET T(this->size+S.size);
    T.n = S.n;
    for(int i = 0; i < S.n; i++) 
    {
        T[i] = S[i];
    }
    for(int i = 0; i < this->n; i++) 
    {
        int k = 0;
        for(int j = 0; j <= T.n; j++) 
        {
            if(this->data[i] != T[j]) 
            { 
                k = 1;
            }
            else
            {
                k = 0;
                break;
            }
        }
        if(k == 1) T+this->data[i];
    }
    return T;
}

SET SET::operator - (const SET &S) 
{
    SET T(this->size+S.size);
    T.n = this->n;
    for(int i = 0; i < this->n; i++) 
    {
        T[i] = this->data[i];
    }
    for(int i = 0; i <S.n; i++) 
    {
        int k = 0;
        for(int j = 0; j < T.n; j++) 
        {
            if(S[i] == T[j]) 
            { 
                k = 1;
                break;
            }
            else
            {
                k = 0;
            }
        }
        if(k == 1) T-S[i];
    }
    return T;
}
        
SET SET::operator * (const SET &S) 
{
    SET T(this->size+S.size);
    T.n = this->n;
    for(int i = 0; i < this->n; i++) 
    {
        T[i] = this->data[i];
    }
    for(int i = 0; i <T.n; i++) 
    {
        int k = 0;
        for(int j = 0; j < S.n; j++) 
        {
            if(T[i] == S[i]) 
            { 
                k = 0;
                break;
            }
            else
            {
                k = 1;
            }
        }
        if(k == 1) 
        {
            T-T[i];
            i -= 1;
        }
    }
    return T;
}

void SET::operator () (int data) 
{
    int c = 0;
    for(int i = 0; i < this->n; i++) 
    {
        if(this->data[i] == data) 
        {
             c = 1;
        }
    }
    if(c == 1) 
    {
        cout << "Phan tu " << data << " thuoc tap hop ." << endl;
    }
    else  cout << "Phan tu " << data << " khong thuoc tap hop ." << endl; 
}

int &SET::operator [] (int i) const
{
    return this->data[i];
}

SET SET::operator = (const SET &S) 
{
    if(this != &S) 
    {
        this->n = S.n;
        this->size = S.size;
        data = new int[size];
        for(int i = 0; i < this->n; i++) 
        {
            data[i] = S[i];
        }
    }
    return *this;
}

int main() 
{  

    int a[] = {1,2,3,4,5,6,7,8,9,10,11}; 
    int n = sizeof(a)/sizeof(int);
    int b[] = {1,2,3,4,11,15,5,14};
    int m = sizeof(b)/sizeof(int);
    SET S(a,n);
    cout << S;
    SET T(b,m);
    cout << T;
    cout << T+1;
    cout << T-1;
    cout << T+S;
    cout << T-S;
    cout << T*S;
    T(16);
    cout << T[3] << endl;
    T = S;
    cout << T;
    return 0;
}