#include<iostream>
using namespace std;
struct stack{
    int top;
    string * str;
};
struct stack * push(struct stack * s, char c){
    s->str[++s->top] = c;
    return s;
}
void pop(struct stack * s){
    s->top--;
}
int main(){
    struct stack * st;
    st = new struct stack;
    st->top = -1;
    string s = "wrwe(wrwet)()";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '('){
            st = push(st,s[i]);
        }
        else if(s[i] == ')'){
            pop(st);
        }
    }
    cout<<st->str->length()<<st->str[0];

}