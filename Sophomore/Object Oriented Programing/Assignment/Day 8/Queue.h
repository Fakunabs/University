#pragma once

#include <iostream>
using namespace std;

// Define the default capacity of the queue
#define SIZE 1000

// A class to represent a queue
template <class T>
class queue
{
    T* arr;         // array to store queue elements
    int capacity;   // maximum capacity of the queue
    int front;      // front points to the front element in the queue (if any)
    int rear;       // rear points to the last element in the queue
    int count;      // current size of the queue

public:
    queue(int size = SIZE);     // constructor
    ~queue();

    void dequeue();
    void enqueue(T x);
    T peek();
    T* getArray();
    T* ToArray() const
    {
        T* temps = new T[capacity];

        for (int i = count - 1; i >= 0; --i)
            temps[i] = arr[i];

        return temps;
    }
    int size();
    bool isEmpty();
    bool isFull();
};

template<class T>
T* queue<T>::getArray() {
    return arr;
}
// Constructor to initialize a queue
template <class T>
queue<T>::queue(int size)
{
    arr = new T[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

template <class T>
queue<T>::~queue() {
    delete arr;
}

// Lay phan tu dau tien ra khoi hang doi 
template <class T>
void queue<T>::dequeue()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Removing " << arr[front] << endl;

    front = (front + 1) % capacity;
    count--;
}

//Them phan tu vao cuoi hang doi
template <class T>
void queue<T>::enqueue(T item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting " << item << endl;

    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

//Tra ve phan tu phia truoc trong hang doi ma k can phai xoa    
template <class T>
T queue<T>::peek()
{
    if (isEmpty())
    {
        cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}

// Utility function to return the size of the queue
template <class T>
int queue<T>::size() {
    return count;
}

// Utility function to check if the queue is empty or not
template <class T>
bool queue<T>::isEmpty() {
    return (size() == 0);
}

// Utility function to check if the queue is full or not
template <class T>
bool queue<T>::isFull() {
    return (size() == capacity);
}