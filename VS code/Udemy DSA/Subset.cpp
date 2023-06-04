#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subarray(char * input,char * output,int i, int j,vector<string> &ans)
{
    if(input[i] == '\0')
    {
        output[j] = '\0';
        // cout<<output<<endl;
        string temp(output);
        ans.push_back(temp);
        return;
    }
    output[j] = input[i];
    subarray(input,output,i+1,j+1,ans);
    subarray(input,output,i+1,j,ans);
}
bool compare(string v1,string v2)
{
    return v1.length()<v2.length();
}
int main()
{
    char input[100] = "abc";
    char output[100];
    vector<string> ans;
    subarray(input,output,0,0,ans);
    sort(ans.begin(),ans.end(),compare);
    for(auto x: ans)
        cout<<x<<endl;
}