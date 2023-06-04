#include<bits/stdc++.h>
using namespace std;
vector<int> SelectionSort(vector<int> v)
{
    for(int i = 0;i < v.size() -1;i++)
    {
        int min_pos = i;
        for (int j = i; j < v.size(); j++)
        {
            if(v[j] < v[min_pos])
                min_pos = j;
        }
        swap(v[min_pos], v[i]);
    }
    return v;
}
int main(){
    vector<int> v = {5,4,3,2,1};
    v = SelectionSort(v);
    for(auto a : v)
        cout<<a<<" ";
    return 0;
}