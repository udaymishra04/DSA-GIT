#include<iostream>
using namespace std;

int insertion(int arr[], int element, int index, int size, int capacity){
    if (size== capacity)
    {
        return -1;
    }
    
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index]= element;
    return 1;
}

void display(int arr[], int size){
    cout<<"Displaying the elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[20]= {5,4,8,6,9,1};
    int element, index;
    cout<<"Enter the element you want you insert: "<<endl;
    cin>>element;
    cout<<"Enter the index where you want to insert the element: "<<endl;
    cin>>index;
    insertion(arr,element,index,6,20);
    if (arr[index]==element)
    {
        display(arr,7);
    }
    else{
        cout<<"Insertion failed"<<endl;
    }
    
    return 0;
}