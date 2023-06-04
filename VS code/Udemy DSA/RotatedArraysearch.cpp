#include<iostream>
#include<vector>
using namespace std;

int rotatedBinarysearch(vector<int> arr,int key)
{
    int n = arr.size();
    int s= 0, e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == key) 
            return mid;
        if(key >= arr[s]) 
        {
            if(key >= arr[s] && key <= arr[mid])
                e = mid-1;
            else
                s = mid+1;
        }
        else{
            if(key <= arr[e])
                s = mid+1;
            else    
                e = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {7,9,10,12,15,0,2,4,6};
    int key = 0;
    cout<<"Enter key: ";
    cin>>key;
    cout<<rotatedBinarysearch(v,key);
}