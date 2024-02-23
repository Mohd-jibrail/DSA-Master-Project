#include<iostream>
using namespace std;
int findUniqueElemet(int arr[],int n){
    int uniqueElement = 0;
    for (int i=0;i<n;i++){
        uniqueElement^=arr[i];
    }
    return uniqueElement;
}
int main()
{
    int a[19]={1,1,22,22,33,33,4,4,5};
    cout<<"uniqueElement : "<<findUniqueElemet(a,10);
    return 0;
}