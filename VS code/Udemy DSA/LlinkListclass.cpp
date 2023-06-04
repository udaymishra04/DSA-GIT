#include<iostream>
// #include "LinkedListtemplate.h"
using namespace std;
class List;
class Node{
    int data;
    Node * next;
    Node(int d):data(d),next(NULL){}
    Node():data(0),next(NULL){}
    ~Node()
    {
        if(next != NULL)
        {
            delete next;
        }
        cout<<"Deleting "<<data<<" Node"<<endl;
    }
    friend class List;
};
class List{
    Node * head;
    Node * tail;
    public:

    List():head(NULL),tail(NULL){}
    void push_front(int val)
    {
        if(head == NULL)
        {
            Node * dummy = new Node(val);
            head = tail = dummy;
        }
        else{
            Node * dummy = new Node(val);
            dummy->next = head;
            head = dummy;
        }
    }
    void push_back(int val)
    {
        if(head == NULL)
        {
            Node * dummy = new Node(val);
            head = tail = dummy;  
        }
        else{
            Node * dummy = new Node(val);
            tail->next = dummy;
            tail = tail->next;
        }
    }
    void print()
    {
        Node * dummy = head;
        while(dummy != NULL)
        {
            cout<<dummy->data<<" ";
            dummy = dummy->next;
        }
        cout<<endl;
    }
    void insert(int val,int pos)
    {
        if(pos == 0){
            push_front(val);
        }
        else{
            Node * temp = head;
            for(int i = 1;i < pos-1;i++)
                temp = temp->next;
            Node * dummy = new Node(val);
            dummy->next = temp->next;
            temp->next = dummy;
        }
    }
    void erase(int pos)
    {
        Node * dummy = head;
        for(int i = 1;i < pos-1;i++)
           dummy = dummy->next;
        Node * temp = dummy->next;
        dummy->next = temp->next;
        temp->next = NULL;
    }
    void reverse()
    {
        Node * prev = NULL;
        Node * cur = head;
        Node * forw;
        while(cur != NULL)
        {
            forw = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forw;
        }
        head = prev;
    }
    Node* begin()
    {
        return head;
    }
    Node* end()
    {
        return tail;
    }
    ~List()
    {
        if(head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
};
int main()
{
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    // l.push_front(9);
    // l.insert(8,4);
    // l.erase(3);
    l.reverse();
    l.print();
    return 0;
}