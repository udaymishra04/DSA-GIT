#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void show(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
struct Node * insertionAtFirst(struct Node * ptr, int element){
    struct Node * p = new struct Node;
    p->data = element;
    p->next = ptr;
    return p;
}
struct Node * insertionAtMid(struct Node * ptr, int element){
    struct Node * p = new struct Node;
    int count= 0;
    struct Node * cpy =ptr;
    while (cpy != NULL)
    {
        cpy = cpy->next;
        count++;
    }
    count = (count-1)/2;
    cpy = ptr;
    cout<<"The mid is "<<count<<endl<<"Ptr is pointing at "<<cpy->data<<endl;
    int i = 0;
    while (i != count)
    {      
        cpy = cpy->next;
        i++;       
    }
        p->next = cpy->next;
        p->data = element;
        cpy->next = p;
    return ptr;
}
struct Node * insertionAtEnd(struct Node * ptr, int element){
    struct Node * p = new struct Node;
    struct Node * cpy = ptr;
    while (cpy->next != NULL)
    {
        cpy = cpy->next;
    }
    cpy->next = p;
    p->data = element;
    p->next = NULL;
    return ptr;
}
struct Node * insertionAtIndex(struct Node * ptr, int index, int element){
    struct Node * p = new struct Node;
    struct Node * cpy = ptr;
    for (int i = 0; i < index - 1; i++)
    {
        cpy = cpy->next;
    }
    p->next = cpy->next;
    p->data = element;
    cpy->next = p;
    return ptr;
}

int main()
{
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
    second->next = NULL;

    // third->data = 9;
    // third->next = fourth;

    // fourth->data = 19;
    // fourth->next = five;

    // five->data = 54;
    // five->next = six;

    // six->data = 87;
    // six->next = NULL;

    show(head);
    // Case 1
    // head = insertionAtFirst(head, 2);
    
    // Case 2
    // head = insertionAtMid(head, 2);

    // Case 3
    // head = insertionAtEnd(head, 2);

    // head = insertionAtIndex(head,2, 6);
    // cout<<"After insertion: "<<endl;
    // show(head);
    return 0;
}