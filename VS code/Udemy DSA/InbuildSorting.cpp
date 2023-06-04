#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a>b;
}
int main(){
    int arr[] = {23,53,65,76,84,24,7,3};
    //To sort in ascending order we can simply use 'sort' function
    sort(arr, arr+8);

    //To sort in descending order we can use 'reverse' function
    reverse(arr,arr+8);

    //We can also sort in descending order using sort function but here we have to pass 
    // a function as parameter
    sort(arr,arr+8,compare);
    //This function is not getting called here but it is just being passed, when we 
    //call a function it's syntax is compare()

    //There's another parameter we can pass to sort in descending order that is 
    //greater<int>() 
    sort(arr, arr + 8,greater<int>());

    for(auto x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}