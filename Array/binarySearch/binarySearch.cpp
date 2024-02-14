#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        
        if (arr[mid]==key)
            return mid;
        else if (arr[mid]>key)
            end = mid-1;
        else
            start =mid+1;
    }
    return -1;
}
int main()
{
    int arr[10]={1,2,3,4,5,5,6,7,8,9};
    int key =9;
    cout<<"Element found At : "<<binarySearch(arr,10,key)<<endl;
    return 0;
}