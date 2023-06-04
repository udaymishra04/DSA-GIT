#include<iostream>
using namespace std;

/*When we have a unsorted array then we should Linear search*/
int LinearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]== element)
        {
            return i;
        }
        
    }
    return -1;
}

//When we have unsorted array we use Binary search
int binarySearch(int arr[],int size,int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    while (low<=high)
    {
        mid = (high + low)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        
        else if(arr[mid] < element){
            low = mid + 1;
        }
        else if(arr[mid] > element){
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
  int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 225;
    int searchIndex = binarySearch(arr, size, element);
    cout<<"The element "<<element<<" was found at index "<<searchIndex<<endl;
    element = 64;
    searchIndex = LinearSearch(arr,size,element);
    cout<<"The element "<<element<<" was found at index "<<searchIndex<<endl;
    return 0;
}