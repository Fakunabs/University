#include"Set.h"
Set::Set() {

}

Set::Set(int a[], int n) {
	delete head;
	head = NULL;
	this->size = 0;
	for (int i = 0; i < n; i++)
		this->push_back(a[i]);
}

Set::Set(const Set& s) {
	delete head;
	head = NULL;
	this->size = 0;
	node* temp = s.head;
	while (temp) {
		this->push_back(temp->data);
		temp = temp->next;
	}
}

Set::~Set() {
	this->deQuyXoa(this->head);
	head = NULL;
}

void Set::deQuyXoa(node* head) {
	if (head == NULL)
		return;
	if (head->next != NULL)
		this->deQuyXoa(head->next);
	delete head;
}

ostream& operator <<(ostream& os, const Set& s) {
	node* temp = s.head;
	while (temp != NULL) {
		os << temp->data << " ";
		temp = temp->next;
	}
	return os;
}
Set Set::operator + (int x) {
	Set temp = *this;
	temp.push_back(x);
	return temp;
}

Set Set::operator -(int x) {
	Set temp = *this;
	temp.remove(x);
	return temp;
}

Set Set::operator +(const Set& s) {
	Set res = *this;
	node* temp = s.head;
	while (temp) {
		if (res.search(temp->data) == NULL)
			res.push_back(temp->data);
		temp = temp->next;
	}

	return res;
}

Set Set::operator - (const Set& s) {
	int n = this->getSize();
	int* a = new int[n];
	this->convertIntoArray(a);
	Set res;
	for (int i = 0; i < n; i++)
		if (!s.search(a[i])) res.push_back(a[i]);
	return res;
}

Set Set::operator *(const Set& s) {
	int n = this->getSize();
	int* a = new int[n];
	this->convertIntoArray(a);
	Set res;
	for (int i = 0; i < n; i++)
		if (s.search( a[i]) != NULL)
			res.push_back(a[i]);
	return res;
}

bool Set::operator () (int val) const {
	node* res = this->search(val);
	if (res == NULL)
		return false;
	return true;
}

Set Set::operator =(const Set& s) {
	if (this != &s) {
		delete head;
		head = NULL;
		this->size = 0;
		node* temp = s.head;
		while (temp) {
			this->push_back(temp->data);
			temp = temp->next;
		}
	}

	return *this;
}