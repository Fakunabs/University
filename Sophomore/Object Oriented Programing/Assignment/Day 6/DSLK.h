#pragma once
#include<iostream>
using namespace std;
struct node {
	int data;
	node* next;
	node(int x) {
		data = x;
		next = NULL;
	}
};

class DSLK {
protected:
	node* head, * tail;
	int size;
public:
	DSLK();
	~DSLK();
	void push_back(int x);
	void push_front(int x);
	void pop_back();
	void pop_front();
	node* search(int x) const;
	bool remove(int x);
	int getSize() const;
	void convertIntoArray(int* a) const;
};