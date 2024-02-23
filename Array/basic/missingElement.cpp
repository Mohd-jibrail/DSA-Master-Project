// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int missingElement1(int arr[],int n){
    int ans=0;
    for ( int i=0;i<(n-1);i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<(n+1); i++){
        ans=ans^i;
    }
    return ans;
}
int missingElement2(int arr[],int n){
   
    for(int i=0;i<n;++i){
        if((arr[i]+1)!=arr[i+1]){
            return arr[i]+1;
        }
    }
    return -1;
}
int missingElement3(int arr[],int n){
    for (int i=0; i<n;i++){
        if(arr[i+1]%arr[i]!=1 && arr[i]!=1){
            return arr[i]+1;
        }
    }
    return -1;
}
int main() {
   
   int arr[10] = {1,2,3,4,5,6,7,8,9,11};
   cout<<missingElement1(arr,10)<<endl;
   cout<<missingElement2(arr,10)<<endl;
   cout<<missingElement3(arr,10)<<endl;
   
   return 0;
}