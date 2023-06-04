//Patern 1:
/*
        *
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * * 
*/
#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(4==j)
            cout<<"* ";
            else if ((j >= 4 - i)  && (j <= 4 + i))
            {
                cout<<"* ";
            }
            else
            cout<<"  ";
            
        }
        cout<<endl;
    }
    
    return 0;
}

// Patern 2:
/*
        0          
      1 0 1        
    2 1 0 1 2      
  3 2 1 0 1 2 3    
4 3 2 1 0 1 2 3 4 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(4==j)
            cout<<"0 ";
            else if ((j >= 4 - i)  && (j <= 4 + i))
            {
                cout<<abs(4-j)<<" ";
            }
            else
            cout<<"  ";
            
        }
        cout<<endl;
    }
    
    return 0;
}
*/