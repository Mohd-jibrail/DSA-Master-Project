#include<iostream>
using namespace std;
int bitSetCountInNumber(int a){
    int i=0;
    while(a){
        a=a & (a-1);
        i++;
    }
    return i;
}
int main()
{
    int a=3;
    
    cout<<"1 bit count in a : "<<bitSetCountInNumber(a)<<endl;
    
    return 0;
}