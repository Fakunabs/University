#include"DSLK.h"

DSLK::DSLK() {
	head = tail = NULL;
	int size = 0;
}

DSLK::~DSLK() {
	if (head == NULL)
		return;

}

void DSLK::push_back(int x) {
	node* temp = new node(x);
	if (head == NULL)
		head = tail = temp;
	else {
		tail->next = temp;
		tail = temp;
	}
	size++;
}

void DSLK::push_front(int x) {
	node* temp = new node(x);
	if (head == NULL)
		head = tail = temp;
	else {
		temp->next = head;
		head = temp;
	}
	size++;
}

void DSLK::pop_back() {
	if (head == tail)
		pop_front();
	else {
		node* temp = head;
		while (temp->next != tail)
			temp = temp->next;
		node* k = temp->next;
		temp->next = tail->next;
		delete k;
		size--;
	}
}

void DSLK::pop_front() {
	if (head == NULL)
		return;
	node* temp = head;
	head = head->next;
	delete temp;
	size--;
}

bool DSLK::remove(int x) {
	if (head == NULL)
		return false;
	node* after = head, * before = NULL;
	while (after != NULL && after->data != x) {
		before = after;
		after = after->next;
	}

	if (after == NULL)
		return false;
	else {
		if (after == head)
			head = head->next;
		else before->next = after->next;
		delete after;
	}
}

node* DSLK::search(int x) const{
	node* temp = this->head;
	while (temp) {
		if (temp->data == x)
			return temp;
		temp = temp->next;
	}
	return NULL;
}

int DSLK::getSize() const{
	return size;
}

void DSLK::convertIntoArray(int* a) const{
	int idx = 0;
	node* temp = head;
	while (temp) {
		a[idx++] = temp->data;
		temp = temp->next;
	}
}