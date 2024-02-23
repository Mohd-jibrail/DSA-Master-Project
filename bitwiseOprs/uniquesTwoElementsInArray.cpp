#include<iostream>
using namespace std;
void findTwoNonRepeatingElemets(int arr[],int n){
    int xorResult=0;
    
    for (int i=0;i<n;i++){

        xorResult^=arr[i];

    }
    int rightmostSetBit = xorResult & (-xorResult);
    
    int element1=0,element2=0;
    
    for (int i=0;i<n;i++){
        if(arr[i] & rightmostSetBit){

            element1^=arr[i];

        }else{

            element2^=arr[i];

        }
    }
    cout<<element1<<" : "<<element2<<endl;
    
}
int main()
{
    int a[10]={11,11,22,22,33,33,55,55,66,77};
    
    findTwoNonRepeatingElemets(a,10);
    return 0;
}