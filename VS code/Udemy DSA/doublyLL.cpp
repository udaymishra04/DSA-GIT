#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
    struct Node * prev;
};
void show(struct Node * ptr){
    cout<<"First from left to right: "<<endl;
    do
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr = ptr->next;
    } while (ptr->next != NULL);
    cout<<"Element: "<<ptr->data<<endl;
    // do{
    //     cout<<"Element: "<<ptr->data<<endl;
    //     ptr = ptr->next;
    // }while (ptr->next != NULL);

    cout<<"Now from right to left: "<<endl;

    do{
        cout<<"Element: "<<ptr->data<<endl;
        ptr = ptr->prev;
    }while (ptr->prev != NULL);
    cout<<"Element: "<<ptr->data<<endl;
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
    head->prev = NULL;

    second->data = 10;
    second->next = third;
    second->prev = head;
    
    third->data = 9;
    third->next = fourth;
    third->prev = second;

    fourth->data = 19;
    fourth->next = five;
    fourth->prev = third;

    five->data = 54;
    five->next = six;
    five->prev = fourth;

    six->data = 87;
    six->next = NULL;
    six->prev = five;

    show(head);
    return 0;
}