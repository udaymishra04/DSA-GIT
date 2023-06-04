#include<iostream>
using namespace std;
int main()
{
    float principle = 0;
    float rate = 0.11;
    for (int i = 0; i < 8; i++)
    {
        int fees;
        cout<<"Enter sem "<<i+1<<" fees: ";
        cin>>fees;
        principle += fees;
        cout<<principle<<endl;
        for(int j = 0;j < 6;j++)
        {
            float temp = principle*(rate/12);
            principle += temp;
        }
    }
    cout<<"Total amount after graduation: "<<principle<<endl;
    return 0;
}