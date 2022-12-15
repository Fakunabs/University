#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack(int s):size(s), top(-1), data(new int [s]){
    // size = s;
    // data = new int [size];
    // top = -1;
}
Stack::Stack(const Stack &x){
    this->size = x.size;
    top = x.top;
    data = new int [size];
    for(int i=0; i<= top; i++)
        data[i] = x.data[i];
}
Stack::~Stack(){
    delete [] data;
}
bool Stack::Push(int x){
    if (!isFull()) {
        data[++top] = x;
        return 1;
    }
    return 0;
}
bool Stack::Pop(int &x){
    if (!isEmpty()) {
        x = data[top--];
        return 1;
    }
    return 0;
}
bool Stack::isFull(){
    return top == size -1;
}
bool Stack::isEmpty(){
    return top == -1;
}
void Display(const Stack &x){
    for(int i = 0; i<= x.top; i++)
        cout<<x.data[i]<<endl;
    cout<<endl;
}
