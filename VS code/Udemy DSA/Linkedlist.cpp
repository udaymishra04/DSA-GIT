#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node * next;
};

void show(struct Node * ptr){
    while(ptr != NULL){
    cout<<"Element: "<<ptr->data<<endl;
    ptr = ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = new struct Node;
    second = new struct Node;
    third = new struct Node;

    head->data= 60;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 45;
    third->next = NULL;

    show(head);
    return 0;
}