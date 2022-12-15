#ifndef NODE_H
#define NODE_H
#include "PhongBT.h"
#include "PhongVIP.h"

template <typename T>
class node 
{
    private:
        T data;
        node<T>* next;
    public:
        node();
        node(node<T>* next, T data);
        void setData(T data);
        T getData();
        void setNext (node<T>* next);
        node<T>* getNext ();
        void print(node<T>* tmp);
        friend class linkedlist<T>;
};


template <typename T>
class linkedlist
{
    private:
        node<T>* head;
        int size;
    public:
        linkedlist ();
        void setHead (node<T>* head);
        node<T>* getHead ();
        void setsize(int size);
        int getSize();
        node<T>* get (string ID);
        void printNext ();
        void del(string MaPH);
        void addTail (T data);
        void ShellSort(bool tanggiam(int,int));
        int InterpolationSearch(string x);  
};

template <typename T>
node<T>::node() {
    }

template <typename T>
node<T>::node(node<T>* next, T data)
    {
        this->data = data;
        this->next = next;
    }

template <typename T>
void node<T>::setNext (node<T>* next)
        {
            this->next = next;
        }

template <typename T> 
node<T>* node<T>::getNext ()
        {
            return next;
        }

template <typename T>
void node<T>::setData(T data) 
    {
        this->data = data;
    }

template <typename T>
T node<T>::getData() 
    {
        return data;
    }

template <typename T>
void node<T>::print(node<T>* tmp) 
{
    cout << "Ma phong: " << tmp->data.getMaPH() << endl;
    cout << "So nguoi toi da: " << tmp->data.getSoNguoi() << endl;
    cout << "Tinh trang: " << tmp->data.getTinhTrang() << endl;
    cout << "Ngay nhan: " << tmp->data.getNgayNhan() << endl;
    cout << "Ngay tra: " << tmp->data.getNgayTra() << endl;
    cout << "Gia: " << tmp->data.getGia() << endl;
    cout << "\n";
}

template <typename T>
linkedlist<T>::linkedlist ()
        {
            head = NULL;
            size = 0;
        }
    
template <typename T>
void linkedlist<T>::setHead (node<T>* tmp)
        {
            this->head = tmp;
        }

template <typename T>
node<T>* linkedlist<T>::getHead () 
{
    return head;
}

template <typename T>
void linkedlist<T>::setsize(int size) 
{
    this->size = size;
}

template <typename T>        
int linkedlist<T>::getSize() 
{
    return size;
}

template <typename T>
node<T>* linkedlist<T>::get (string ID)
        {
            node<T>* H = NULL;
            if(head != NULL) 
            {
                if(head->getData().getMaPH() == ID) return head;
                for(H = head->getNext(); H != head; H = H->getNext()) 
                {
                    if(H->getData().getMaPH() == ID) 
                    {
                        return H;
                    }  
                }
            }
            return NULL;
        }


template <typename T>    
void linkedlist<T>::printNext()
        {
            node<T>* tmp = head;
            if(head != NULL) 
            {
                do
                {
                    tmp->print(tmp);
                    tmp = tmp->getNext();
                }
                while (tmp != head);
            } else cout << "Rong" << endl;
        }  

template <typename T>
void linkedlist<T>::del(string MaPH) 
{
    if(head != NULL) 
    {
        node<T>* C = head;
        node<T>* P;
        PhongKS U = C->getData();
        bool check = false;
        if(head == head->getNext()) 
        {
            if(U.getMaPH() == MaPH) 
            {
                head = NULL;
                size--;
                return;
            }
        } 
        do
        {
            P = C;
            C = C->getNext();
            PhongKS U = C->getData();
            if(U.getMaPH() == MaPH) 
            {
                check = true;
                P->next = C->next;   
                if(C == head) head = P;
                C = P->next;
                size--;
            }
        }
        while (C != head);
        if(check == false) cout << "Khong co ma phong nay !!!" << endl;
    } else cout << "Rong" << endl;
}

template <typename T>
void linkedlist<T>::addTail (T data)
        {
            node<T>* tmp = new node<T> (NULL,data);
            if (head == NULL)
            {
                head = tmp;
                head->setNext(head);
                size++;
                return;
            } 
            node<T>* p = head;
            while( p->getNext() != head) 
            {
                p = p->getNext();
            }
            p->setNext(tmp);
            tmp->setNext(head);
            size++;
        }

template <typename T>
void linkedlist<T>::ShellSort(bool tanggiam(int,int)) 
{
    T data[size+1];
    int n = size;
    node<T>* P = head;
    for(int t = 0; t < size; t++) 
    {
        data[t] = P->getData();
        P = P->getNext();
    }
    for (int interval = n / 2; interval > 0; interval /= 2) 
    {
        for (int i = interval; i < n; i += 1) 
        {
            T temp = data[i];
            int j;
            for (j = i; j >= interval && tanggiam(stoi(data[j - interval].getMaPH()),stoi(temp.getMaPH())); j -= interval) 
            {
                data[j] = data[j - interval];
            }
            data[j] = temp;
        }
    }
    node<T>* K = head;
    for(int t = 0; t < size; t++) 
    {
        K->setData(data[t]);
        K = K->getNext();
    }
}

template <typename T>
int linkedlist<T>::InterpolationSearch(string x) 
{
    node<T>* data[size+1];
    int n = size;
    node<T>* P = head;
    for(int t = 0; t < size; t++) 
    {
        data[t] = P;
        P = P->getNext();
    }
    int X = stoi(x);
    int left = 0;
    int right = n-1;
    while (left <= right && X >= stoi(data[left]->getData().getMaPH()) && X <= stoi(data[right]->getData().getMaPH()))
    {
        double val1 = (double) (X - stoi(data[left]->getData().getMaPH())) / (stoi(data[right]->getData().getMaPH())- stoi(data[left]->getData().getMaPH()));
        int val2 = (right-left);
        int Search = left + val1*val2;
    
        if (stoi(data[Search]->getData().getMaPH()) == X) 
        {
            data[Search]->print(data[Search]);
            return 0;
        }
        if (stoi(data[Search]->getData().getMaPH()) < X)
        left = Search + 1;
        else
        right = Search - 1;
    }
    return -1;
}

#endif