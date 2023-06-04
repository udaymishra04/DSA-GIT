#include<bits/stdc++.h>
using namespace std;

int getibit(int n,int i)
{
    int temp = (1<<i);
    // cout<<temp<<endl;
    return (temp & n)>0 ? 1 : 0;
}
void setiBit(int &n,int i)
{
    int temp = (1<<i);
    n = n | temp;
}
void cleariBit(int &n,int i)
{
    int temp = ~(1<<i);
    n = n & temp;
}
void updateiBit(int &n,int i,int v)
{
    cleariBit(n,i);
    int temp = v<<i;
    n = n | temp;
}
void clearLastiBit(int &n,int i)
{
    int temp = (~0)<<i;
    n = n&temp;
}
void clearRangeOfBit(int &n,int i,int j)
{
    int a = (~0)<<(j+1);
    int b = 1<<i - 1;
    int temp = a|b;
    n = n&temp;
}
void countBits(int n)
{
// This function will tell that a number has how many
// ones in it(in it's binary form).
    int n1 = n;
    int ans = 0;
    while(n>0)
    {
        int temp = n&1;
        ans += temp;
        n = n>>1;
    }
    cout<<n1<<" has "<<ans<<" bits."<<endl;
}
void countBits1(int n)
{
    int n1 = n;
    int ans = 0;
    while(n1>0)
    {
        n1 = n1&(n-1);
        ans++;
    }
    cout<<n1<<" has "<<ans<<" bits."<<endl;
}
// 7 = 1 1 1    5 = 1 0 1   13 = 1 1 0 1    15 = 1 1 1 1
int main(){
    int n = 13;
    int i = 1;
    // cin>>i;
    // cout<<getibit(n,i);
    // setiBit(n,i);
    // cleariBit(n,i);
    int v = 0;
    // updateiBit(n,i,v);
    // clearLastiBit(n,i);
    int j = 2;
    // clearRangeOfBit(n,i,j);
    // cout<<n;
    // countBits(n);
    countBits(n);
    return 0;
}