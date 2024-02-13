#include<iostream>
using namespace std;
bool isEven(int a){
    if((a&1)==0){
        return true;
    }
    return false;
}
int main()
{
    int a,b;
    cout<<"Inter the values :";
    cin>>a>>b;
    cout<<"The number"<<a<<"is Even: "<<isEven(a);
    cout<<"The number"<<b<<"is Even : "<<isEven(b);
    return 0;
}