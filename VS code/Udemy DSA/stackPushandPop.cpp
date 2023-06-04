#include<iostream>
using namespace std;

struct stack{
    int top;
    int size;
    int * arr;
};

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else 
        return 0;
}
int isEmpty(struct stack * ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else 
        return 0;
}
void push(struct stack * ptr, int val){
    if (isFull(ptr))
    {
        cout<<"StackOverflow!"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void show(struct stack * ptr){
    if(ptr->top == -1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Displaying the elements of stack: "<<endl;
        for (int i = 0; i <= ptr->top; i++)
        {
            cout<<ptr->arr[i]<<endl;
        }
        
    }
}
void topmost(struct stack * ptr){
    cout<<"The topmost element of array is "<<ptr->arr[ptr->top]<<endl;
}
void bottomMost(struct stack * ptr){
    cout<<"The bottom most element of array is "<<ptr->arr[0]<<endl;
}
void peek(struct stack * ptr, int position){
    int index = ptr->top - position +1;
    if(index == -1 || index >= ptr->size)
        cout<<"Invalid position"<<endl;
    else{
        cout<<"Element at positon "<<position<<" is "<<ptr->arr[index]<<endl;
    }
}
int main(){
    struct stack * s = new struct stack;
    s->size = 10;
    s->top = -1;
    s->arr = new int[s->size];
    if (isEmpty(s))
    {
        cout<<"Stack Underflow!"<<endl;
    }
    push(s,23);
    push(s,43);
    push(s,34);
    push(s,2);
    push(s,43);
    push(s,59);
    push(s,65);
    push(s,54);
    show(s);
    bottomMost(s);
    topmost(s);
    peek(s,3);
    
    return 0;
}