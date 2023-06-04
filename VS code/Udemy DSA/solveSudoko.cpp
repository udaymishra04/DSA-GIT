#include<iostream>
using namespace std;
bool safe(int i,int j,int no,int n,int arr[3][9])
{
    int row = i,col = j;
    // checking in same row and col
    for(int temp = 0;temp < n;temp++)
    {
        if(arr[row][temp] == no || arr[temp][col] == no)
            return false;
    }
    // formula to get the coordinate of grid
    int sx = (i/3)*3;
    int sy = (j/3)*3;
    for(int x = sx;x < sx+3;x++)
    {
        for(int y = sy;y < sy+3;y++)
        {
            if(arr[x][y] == no)
                return false;
        }
    }
    return true;
}
bool sudoko(int i,int j,int n,int arr[9][9])
{
    // Base Case
    if(i==n)
        return true;
    // Reached end of row
    if(j==n)
        return sudoko(i+1,0,n,arr);
    // Value is predefined
    if(arr[i][j] != 0)
        return sudoko(i,j+1,n,arr);
    for(int no = 1;no <= n;no++)
    {
        if(safe(i,j,no,n,arr))
        {
            arr[i][j] = no;
            bool solveproblem = sudoko(i,j+1,n,arr);
            if(solveproblem)
                return true;
            // Backtracking
            arr[i][j] = 0;
        }
    }
    // Value cannot be placed we need to update the previously placed value
    return false;
}
int main()
{
    int arr[9][9] = {{5,3,0,0,7,0,0,0,0},
                    {6,0,0,1,9,5,0,0,0},
                    {0,9,8,0,0,0,0,6,0},
                    {8,0,0,0,6,0,0,0,3},
                    {4,0,0,8,0,3,0,0,1},
                    {7,0,0,0,2,0,0,0,6},
                    {0,6,0,0,0,0,2,8,0},
                    {0,0,0,4,1,9,0,0,5},
                    {0,0,0,0,8,0,0,7,9}};
    int n = 9;
    sudoko(0,0,n,arr);
    for(int i = 0;i < 9;i++)
    {
        for(int j = 0;j < 9;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}