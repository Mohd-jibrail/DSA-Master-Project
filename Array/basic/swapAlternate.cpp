#include <iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    
    for(int i=0;i<n;i+2){
        
        if(i+1<n){
           swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[], int n){
    
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    
    int arr[10]={1,2,3,4,3,2,1,3,9,11};
    swapAlternate(arr,10);
    printArray(arr,10);
    
	return 0;
}