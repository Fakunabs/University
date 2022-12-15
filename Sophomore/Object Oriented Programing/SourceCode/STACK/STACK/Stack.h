#ifndef Stack_h
#define Stack_h
class Stack {
    int size, top;
    int *data;
    public:
        Stack(int s = 10);
        Stack(const Stack &x);
        ~Stack();
        bool Push(int x);
        bool Pop(int &x);
        bool isFull();
        bool isEmpty();
        friend void Display(const Stack &x);
};
#endif