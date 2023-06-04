#include<iostream>
using namespace std;

void deletion(int arr[], int index, int size){
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
}
void display(int arr[],int size);
int main(){
    int arr[30] = {5,48,6,2,4,5,7};
    int index;
    cout<<"Enter the index from where you want to delete element: "<<endl;
    cin>>index;
    deletion(arr,index,7);
    display(arr,6);
    return 0;
}
void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}