#include<iostream>
using namespace std;
#include<iostream>
#include "Vector.h"
using namespace std;
int main()
{
    Vector<char> v1;
    v1.push_back('a');
    v1.push_back('b');
    v1.push_back('c');
    v1.push_back('d');
    v1.push_back('e');
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    for(int i = 0;i<v1.size();i++)
        cout<<v1[i]<<" ";

    //Using few functions: 
    int arr[]= {34,541,64,245,86,95,3};
    vector<int> v(arr,arr+7);
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x<<" ";
    vector<int>:: iterator low,up;
    low = lower_bound(v.begin(),v.end(),60);
    up = upper_bound(v.begin(),v.end(),95);
    cout<<endl;
    cout<<"Lower bound "<<low-v.begin()<<endl;
    cout<<"Upper bound "<<up-v.begin()<<endl;
}