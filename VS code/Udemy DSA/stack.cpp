#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int * arr;
};

struct stack insert(struct stack s){
    if (s.top == s.size - 1)
    {
        cout<<"Stack is full"<<endl;
        return s;
    }
    
    int el= 0;
    cout<<"How many elements you want to enter: "<<endl;
    cin>>el;
    for (int i = 0; i < el; i++)
    {
        int element= 0;
        cout<<"Enter element no. "<<i + 1<<": ";
        cin>>element;
        s.arr[i] = element;
        s.top++;
    }
    return s;
}
void show(struct stack s){
    if (s.top < 0)
    {
        cout<<"Stack is empty"<<endl;
    }
    
    else{
    for (int i = 0; i <= s.top; i++)
    {
        cout<<"Element "<<i+1<<" : ";
        cout<<s.arr[i]<<endl;

    }
    }
}

int main(){
    struct stack s;
    s.top = -1;
    s.size = 10;
    s.arr = new int[s.size]; 
    s = insert(s);
    show(s);
    s = insert(s);
    return 0;
}