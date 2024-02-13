#include<iostream>
using namespace std;
int main()
{
    int a=2333,b=12;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
    return 0;
}