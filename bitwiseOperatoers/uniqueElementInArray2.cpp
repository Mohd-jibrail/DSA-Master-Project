#include<iostream>
using namespace std;
int findUniqueElemet(int arr[],int n){
    int ones=0,twoes=0;
    for (int i=0;i<n;i++){
        ones=(ones^arr[i]) & ~twoes;
        twoes=(twoes^arr[i]) & ~ones;
    }
    return ones;
}
int main()
{
    int a[10]={11,11,11,22,22,22,33,33,5,33};
    cout <<"unique element : "<<findUniqueElemet(a,10)<<endl;
    return 0;
}