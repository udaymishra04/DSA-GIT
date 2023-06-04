#include<iostream>
using namespace std;
void display(int arr[][20],int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
bool canplace(int i,int j,int n,int arr[][20])
{
    int a = i-1,b = j;
    // Same column check
    while(a>=0)
    {
        if(arr[a][b] == 1)
            return false;
        a--;
    }
    a = i-1;
    b = j-1;
    // Left diagonal check
    while(a>=0 && b >=0)
    {
        if(arr[a][b] == 1)
            return false;
        a--;
        b--;
    }
    a = i-1;
    b = j+1;
    // Right diagonal check
    while(a>=0 && b < n)
    {
        if(arr[a][b] == 1)
            return false;
        a--;
        b++;
    }
    return true;
}
bool solveNQueen(int n,int i,int arr[][20])
{
    // Base case
    if(i==n)
    {
        display(arr,n);
        return true;
    }
    // recursion
    for(int j = 0;j < n;j++)
    {
        if(canplace(i,j,n,arr))
        {
            arr[i][j] = 1;
            bool success = solveNQueen(n,i+1,arr);
            if(success)
                return true;
            // Backtrack
            arr[i][j] = 0;
        }
    }
    return false;
}
int main()
{
    int arr[20][20] = {0};
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    solveNQueen(n,0,arr);
}