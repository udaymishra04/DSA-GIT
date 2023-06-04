#include<iostream>
using namespace std;

int lastoccurance(int * arr,int n,int key)
{
    if(n==0)
        return -1;
    int ans = lastoccurance(arr + 1,n-1,key);
    if(ans == -1)
    {
        if(arr[0] == key)
            return 0;
        else   
            return -1;
    }
    else{
        return ans+1;
    }
}
int firstoccurance(int * arr,int n,int key)
{
    if(n==0)
        return -1;
    if (arr[0] == key)
    {
        return 0;
    }
    int ans = firstoccurance(arr+1,n-1,key);
    if(ans != -1)
        return ans+1;
    return -1;    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,3,53,65};
    int key = 7;
    int n = 10;
    // cout<<lastoccurance(arr,n,key);
    cout<<firstoccurance(arr,n,key);
    return 0;
}