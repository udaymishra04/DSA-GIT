#include<iostream>
using namespace std;
int convertToBinary(int n)
{
    int ans = 0;
    int p = 1;
    while(n > 0)
    {
        ans += p*(n&1);
        p *= 10;
        n = n>>1;
    }
    return ans;
}
// 19= 10011    13 = 1101
int main(){
    int n = 13;
    cout<<convertToBinary(n);
    return 0;
}