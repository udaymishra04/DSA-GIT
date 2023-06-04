#include<bits/stdc++.h>
using namespace std;
vector<int> SelectionSort(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int cur = v[i];
        int prev = i-1;
        while(prev >= 0 && v[prev] > cur)
        {
            v[prev + 1] = v[prev];
            prev--;
        }
        v[prev + 1] = cur;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    }
    return v;
}
int main(){
    vector<int> v = {5,4,3,2,1};
    v = SelectionSort(v);
    for(int x : v)
        cout<<x<<" ";
    return 0;
}