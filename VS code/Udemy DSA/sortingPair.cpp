#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Using compare to sort the pairs on the basis of numbers
bool compare(pair<string,int> v1,pair<string,int> v2)
{
    int a = v1.second;
    int b = v2.second;
    return a<b;
}
int main(){
    vector<pair<string,int>> s = {{"Uday",4},{"Rahul",54},{"Armaan",28},{"Akash",5}};
    //If compare isn't used then it will sort on the basis of Names(lexicographically)
    sort(s.begin(),s.end(),compare);
    for(auto x : s)
        cout<<x.first<<": "<<x.second<<endl;
    return 0;
}