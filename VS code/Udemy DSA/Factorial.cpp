#include<iostream>
#include<vector>
using namespace std;
int factorial(int n)
{
    if(n==1 || n==0)
    return 1;
    else{
        return n*factorial(n-1);
    }
}
int main(){
    cout<<rand(1,5);
    return 0;
}