#include<iostream>
using namespace std;

struct stack{
    int data;
    struct stack * next;
};
struct stack * push(struct stack * p, int val)
{
    struct stack * n = new struct stack;
    struct stack * result = n;
    n->data = val;
    n->next = p;
    return result;
}
void peek(struct stack * p, int position)
{
    int count = 1;
    while(count != position)
    {
        // cout<<"Value of p is "<<p->data<<endl;
    p = p->next;
    count++;
    }
    cout<<"Value at position "<<position<<" is "<<p->data<<endl;
}
void topMost(struct stack * ptr){
    cout<<"The topmost element is "<<ptr->data<<endl;
}
void BottomMost(struct stack * ptr){
    while(ptr->next != NULL)
    ptr = ptr->next;
    cout<<"The value of bottommost element is "<<ptr->data<<endl;
}
bool isEmpty(struct stack * ptr){
    if(ptr == NULL)
    return true;
    else 
    return false;
}
struct stack * pop(struct stack * p)
{
    if(p == NULL)
    cout<<"Stack is empty!"<<endl;
    else 
    {
        struct stack * n = new struct stack;
        n = p;
        p = p->next;
        free(n);
        return p;
    }
}
void show(struct stack * ptr){
    cout<<"The values of stack are: "<<endl;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main(){
    struct stack *a;
    struct stack *b;
    struct stack *c;
    struct stack *d;
    struct stack *e;
    struct stack *f;
    a = new struct stack;
    b = new struct stack;
    c = new struct stack;
    d = new struct stack;
    e = new struct stack;
    f = new struct stack;
    a->data = 23;
    a->next = b;
    b->data = 42;
    b->next = c;
    c->data = 64;
    c->next = d;
    d->data = 45;
    d->next = e;
    e->data = 26;
    e->next = f;
    f->data = 63;
    f->next = NULL;
    // show(a);
    // a = push(a,99);
    show(a);
    a = pop(a);
    cout<<"After poping elements: "<<endl;
    show(a);
    // a = pop(a);
    // cout<<"After poping elements: "<<endl;
    // show(a);
    // peek(a,4);
    // topMost(a);
    // BottomMost(a);
    return 0;
}