#include<bits/stdc++.h>

using namespace std;
vector<int> BubbleSort(vector<int> v)
{
    int n = v.size();
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(v[j] > v[j+1])
                swap(v[j], v[j+1]);
        }
    }  
    return v;  
}
int main(){
    vector<int> v = {5,4,54,32,64};
    v = BubbleSort(v);
    for(int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}