#include<bits/stdc++.h>
using namespace std;
void fastexp(int a,int n)
{
    int ans = 1;
    int p = a;
    while(n>0)
    {
        int lastBit = n&1;
        if(lastBit)
        {
            ans = ans*p;
        }
        p = p*p;
        n= n>>1;
    }
    cout<<ans;
}
int main(){
    cout<<sqrt(27);
    return 0;
}