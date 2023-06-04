#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &array,int s,int e)
{
    int i = s;
    int m = (s+e)/2;
    int j = m+1;

    vector<int> temp;
    while(i<=m && j<=e)
    {
        if(array[i] < array[j])
        {
            temp.push_back(array[i]);
            i++;
        }
        else{
            temp.push_back(array[j]);
            j++;
        }
    }
    while(i<=m)
    {
        temp.push_back(array[i++]);
    }
    while(j<=e){
        temp.push_back(array[j++]);
    }
    int k = 0;
    for(int idx = s;idx<=e;idx++)
    {
        array[idx] = temp[k++];
        // cout<<array[idx]<<" ";
    }
    // cout<<endl;
    return;
}
void mergesort(vector<int> &array,int s,int e)
{
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(array,s,mid);
    mergesort(array,mid+1,e);
    merge(array,s,e);
    return ;
}
int main(){
    vector<int> v = {3,43,5,65,8,54,32,19};
    int n = v.size()-1;
    mergesort(v,0,n);
    for(auto x: v)
        cout<<x<<" ";
    return 0;
}