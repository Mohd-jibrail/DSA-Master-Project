#include <iostream>
using namespace std;

int getMax(int arr[],int n){
    
    int max=-1292823;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
    
}
int getMin(int arr[],int n){
    int min= 18293734;
    
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
    
int main() {
    
    int arr[10]={1,2,3,4,3,2,1,3,9,11};
    cout<<"Max number ::"<<getMax(arr,10)<<endl;
    cout<<"Min number ::"<<getMin(arr,10)<<endl;
    
	return 0;
}