#pragma once
#include"DSLK.h"
class Set :public DSLK {
public:
	Set();
	Set(int a[], int n);
	Set(const Set& s);
	~Set();
	void deQuyXoa(node* head);
	friend ostream& operator <<(ostream& os, const Set& s);
	Set operator + (int x);
	Set operator -(int x);
	Set operator =(const Set& s);
	Set operator +(const Set& s);
	Set operator - (const Set& s);
	Set operator *(const Set& s);
	bool operator () (int val) const;
};