#include <iostream>
using namespace std;
int getDuplicate(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    for(int i=0;i<n;i++){
        ans^=i;
    }
    return ans;
}

int main() {
    
    //Seriese of natural numbers with one duplicate number
    int arr[10]={1,2,3,4,5,6,7,8,1,9};
    cout<<"Duplicate :: "<<getDuplicate(arr,10)<<endl;
    
	return 0;
}