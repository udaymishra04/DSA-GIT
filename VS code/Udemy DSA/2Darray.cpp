#include<bits/stdc++.h>
using namespace std;

int ** creating2Darray(int row,int col)
{
    int ** arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    int values = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = values;
            values++;
        }
        
    }
    
    return arr;
}

int main(){
    int row = 3, col = 4;
    int ** arr = creating2Darray(row,col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}