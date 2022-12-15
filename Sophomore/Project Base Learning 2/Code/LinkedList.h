#ifndef LinkedList_h
#define LinkedList_h

#include <bits/stdc++.h>

using namespace std;

template <class T>
class Node{
    T data;
    Node *next;
public:
    Node(T data,Node *next):data(data),next(next){};
    T getNode()
    {
        return data;
    };
    Node* getNext()
    {
        return next;
    }
    void setNode(const T &data)
    {
        this->data=data;
    }
    template <class U>
    friend class LinkedList;
};

template <class T>
class LinkedList{
    Node<T> *head;
public:
    LinkedList(){this->head=NULL;};
    ~LinkedList(){this->head=NULL;};
    Node<T>* getHead()
    {
        return this->head;
    };
    LinkedList InsertNodeAfter(T a);
    LinkedList ReadDataFromFile(string s);
    void SavaDataToFile(string s) const;
    void getNode(T &p);
    T getNode(string s) ;
    void printfList();
    bool CheckID(string s) const;
    LinkedList CreateNode();
    float Cash(string s);
    LinkedList UpDateNode(string s,T temp);
};

template <class T>
LinkedList<T> LinkedList<T>::InsertNodeAfter(T a)
{
    Node<T> *temp=new Node<T>(a,NULL);
    if (this->head==NULL)
        this->head=temp;
    else
    {
        Node<T> *node = this->head;
        while ( node->next!=NULL )
            node = node->next;
        node->next = temp;
    }
    return *this;
}

template <class T>
LinkedList<T> LinkedList<T>::ReadDataFromFile(string s)
{
    ifstream file;
    file.open(s,ios::in);
    T node;

    while(!file.eof())  //khi chưa tới cuối file thì tiếp tục đọc
    {
        node.ReadNode(file);
        this->InsertNodeAfter(node);
    }

    file.close();
    return *this;
}

template <class T>
void LinkedList<T>::SavaDataToFile(string s) const
{
    Node<T> *node = this->head;
    ofstream file;
    file.open(s,ios::out | ios::trunc);

    while (node!=NULL)
    {
        T temp_node=node->getNode();
        temp_node.SaveNode(file);
        if (node->next!=NULL)
        {
            file << endl;
        }
        node=node->next;
    }

    file.close();
}

template <class T>
void LinkedList<T>::getNode(T &p)
{
    Node<T> *l=this->head;
    p=l->data;
}

template <class T>
T LinkedList<T>::getNode(string s)
{
    Node<T> *p=this->head;
    T node_cur;
    while (p!=NULL)
    {
        node_cur=p->getNode();
        if(node_cur.getID()==s) break;
        p=p->getNext();
    }
    return node_cur;
}

template <class T>
void LinkedList<T>::printfList()
{
    Node<T> *p=this->head;
    (p->data).printfIntro();
    while (p!=NULL)
    {
        (p->data).printfNode();
        p=p->next;
    }
}

template <class T>
bool LinkedList<T>::CheckID(string s) const
{
    Node<T> *p=this->head;
    T node_cur;
    while (p!=NULL)
    {
        node_cur=p->getNode();
        if (node_cur.getID()==s) return true;
        p=p->next;
    }
    return false;
}
/*
template <class T>
float LinkedList<T>::Cash(string s)
{
    float t=0;
    Node<T> *p=this->head;
    T node_cur;
    while (p!=NULL)
    {
        node_cur=p->getNode();
        if(node_cur.getID()==s)
        {
            t+=(node_cur.getAmount()*node_cur.getPrice());
        }
        p=p->next;
    }
    return t;
}*/

template <class T>
LinkedList<T> LinkedList<T>::UpDateNode(string s,T temp)
{
    Node<T> *p=this->head;
    T node_cur;
    while (p!=NULL)
    {
        node_cur=p->getNode();
        if(node_cur.getID()==s)
        {
            p->setNode(temp);
        }
        p=p->next;
    }
    return *this;
}

#endif // LinkedList_h
