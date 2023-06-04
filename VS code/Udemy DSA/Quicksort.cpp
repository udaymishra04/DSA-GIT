#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v,int s,int e)
{
    int pivot = v[e];
    int i = s-1;
    for(int j = s;j < e;j++)
    {
        if(v[j] < pivot)
        {
            i++;
            swap(v[i],v[j]);
        }
    }
    i++;
    swap(v[i],v[e]);
    return i;
}
void bubblesort(vector<int> &v,int s,int e)
{
    if(s>=e)
        return;
    int part = partition(v,s,e);
    bubblesort(v,s,part-1);
    bubblesort(v,part+1,e);
}
int main()
{
    vector<int> v = {3,43,5,65,8,54,32,19};
    int n = v.size()-1;
    bubblesort(v,0,n);
    for(auto x: v)
        cout<<x<<" ";
}