#include<iostream>
using namespace std;
int firstPosition(int arr[], int n, int key)
{
    int start=0,end=n-1;
    int mid= start + (end-start)/2;
    int position=-1;
    while(start<=end)
    {
        if(arr[mid]==key){
            position = mid;
            end = mid-1;
        }else if( key>arr[mid]){
            start = mid+1;
        }else if(key <arr[mid]){
            end = mid-1;
        }
        mid = start + ( end-start)/2;
    }
    return position;
}

int lastPosition(int arr[], int n, int key)
{
    int start =0 , end =n-1;
    int mid = start + (end-start)/2;
    int position = -1;
    while (start<=end)
    {
        if(arr[mid]==key){
            position = mid;
            start = mid+1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return position;
    
}
int main()
{
    int arr[10] = {1,2,3,3,3,4,4,4,4,4};
    cout << "First Index of 3s : "<<firstPosition(arr,10,3)<<endl;
    cout << "Last Indext of 4s : "<<lastPosition(arr,10,4)<<endl;
    return 0;
}