#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};
void show(struct Node * ptr){
    struct Node * p = ptr;
    cout<<"Element: "<<ptr->data<<endl;
    ptr = ptr->next;
    while (ptr != p)
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
}
struct Node * insertAtFirst(struct Node * head, int element){
    struct Node * ptr = new struct Node;
    ptr->data = element;
    struct Node * p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return ptr;
}

int main(){
    
    struct Node *head, *second, *third, *fourth, * five, *six, *seven;
    head = new struct Node;
    second = new struct Node;
    third = new struct Node;
    fourth = new struct Node;
    five = new struct Node;
    six = new struct Node;

    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 19;
    fourth->next = five;

    five->data = 54;
    five->next = six;

    six->data = 87;
    six->next = head;

    show(head);
    cout<<"After insertion: "<<endl;
    head = insertAtFirst(head, 11);
    show(head);
    return 0;
}