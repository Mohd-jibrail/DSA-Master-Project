#include<iostream>
using namespace std;
string isPowerOfTwo(int num){
    if((num & (num-1)) ==0){
        return "true";
    }
    return "false";
}
int main()
{
    cout<<"is a power of two : "<<isPowerOfTwo(9)<<endl;
    
    return 0;
}