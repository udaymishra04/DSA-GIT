#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};
void show(struct Node * ptr){
    while (ptr != NULL)
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

struct Node * DeletionAtfirst(struct Node * ptr){
    struct Node * p = ptr;
    ptr = ptr->next;
    free(p);
    return ptr;
}
struct Node * DeletionAtMid(struct Node * ptr){
    struct Node * cpy = ptr;
    int count = 0;
    while (cpy != NULL)
    {
        cpy = cpy->next;
        count++;
    }
    cout<<"Total elements: "<<count<<endl;
    count = count/2;
    cpy = ptr;
    for (int i = 0; i < count - 1; i++)
    {
        cpy = cpy->next;
    }
    cout<<"cpy is point at: "<<cpy->data<<endl;
     struct Node * p = cpy->next;
     cpy->next = p->next;
     free(p);
     return ptr;   
}
struct Node * DeletionAtEnd(struct Node * ptr){
    int i = 0;
    struct Node * p = ptr;
    struct Node * q = ptr;
    while (p->next != NULL)
    {
        p = p->next;
        i++;
    }
    
    for (int j = 0; j < i - 1; j++)
    {
        q = q->next;
    }
    q->next = NULL;
    cout<<"P is pointing at "<<p->data<<" and Q is pointing at "<<q->data<<endl;
    free(p);
    return ptr;
}
struct Node * DeletionAfterNode(struct Node * ptr, int index){
    struct Node * p = ptr;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    cout<<"P is pointing at "<<p->data<<endl;
    struct Node * q = p->next;
    p->next = q->next;
    free(q);
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
    six->next = NULL;

    show(head);
    // Case 1
    // head = DeletionAtfirst(head);
    
    // Case 2
    // head = DeletionAtMid(head);

    // Case 3
    // head = DeletionAtEnd(head);

    head = DeletionAfterNode(head,3);
    cout<<"After Deletion: "<<endl;
    show(head);
    return 0;
}