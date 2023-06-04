#include<bits/stdc++.h>
using namespace std;
/*     
            * 
          * * * 
        * * * * *
      * * * * * * *       
*/
void func(int n)
{
    for(int i = 1;i <= n;i++){
        for(int sp = 0;sp < n-i;sp++)
            cout<<"  ";
        for(int st = 0;st < i;st++)
            cout<<st+1<<" ";
        for(int num = i-1;num >= 1;num--)
            cout<<num<<" ";
        cout<<endl;
    }
}
int main(){
    func(4);
    return 0;
}