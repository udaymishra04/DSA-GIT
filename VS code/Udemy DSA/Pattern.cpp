#include<bits/stdc++.h>
using namespace std;
/*
       
4 4 4 4 4 4 4 
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/
void func(int n)
{
    for(int row = 0;row < 2*n-1;row++)
    {
        for(int col = 0;col < 2*n-1;col++)
        {
            int num =n - min(min(col,row),min(2*n - col - 2,2*n - row - 2));
            cout<<num<<" ";
        }
        cout<<endl;
    }
}
int main(){
    func(4);
    return 0;
}