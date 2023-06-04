#include<iostream>
using namespace std;

class myarray{
    public:
    int totalsize;
    int usedsize;
    int* ptr;

    myarray(int tsize, int usize){
        totalsize = tsize;
        usedsize = usize;
        ptr = new int[tsize];
    }
    myarray();
    
    void setdata(){
        for (int i = 0; i < usedsize; i++)
        {
            cout<<"Enter the value of "<<i+1<<" element: ";
            cin>>*(ptr+i);
            // ptr++;
        }
        
    }

    void showdata(){
        for (int i = 0; i < usedsize; i++)
        {
            cout<<"The value of element at "<<i<<" is: "<<*(ptr+i)<<endl;
        }
        
    }
};
int main(){
    cout<<"Enter the total size, used size: ";
    int tsize, usize;
    cin>>tsize>>usize;
    class myarray a1(tsize,usize);
    a1.setdata();
    a1.showdata();
    return 0;
}