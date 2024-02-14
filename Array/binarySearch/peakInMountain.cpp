#include<iostream>
using namespace std;
int peakInMountain(int arr[],int n){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    while (start<end)
    {
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
    
}
int main()
{
    int arr[10]={ 8,9,11,1,2,3,4,5,6,7};
    cout << "The Peack Element is : "<<peakInMountain(arr,10)<<endl;
    
    return 0;
}