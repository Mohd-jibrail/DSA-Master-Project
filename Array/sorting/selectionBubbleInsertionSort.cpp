#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    
    for (int i=0; i<n-1;i++){
        
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
void bubbleSort(int arr[],int n){
    
    for (int i=0;i<n;i++){
        
        bool swapped=false;
        
        for (int j=0;j<n-1;j++){
            
            if(arr[j]>arr[j+1]){
                
                swap(arr[j],arr[j+1]);
                swapped=true;
                
            }
        }
        if(swapped==false){
            break;
        }
    }
}
void insertionSort(int arr[],int n){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                
                arr[j+1] = arr[j];
            }
            else { 
                break;
            }
            
        }
       
        arr[j+1] = temp;  
    } 
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[10]={10,11,12,13,14,15,14,13,12,11};
    int arr2[10]={20,19,18,17,11,11,14,13,12,11};
    int arr3[10]={22,12,11,20,13,91,11,14,13,12};
    
    selectionSort(arr1,10);
    bubbleSort(arr2,10);
    insertionSort(arr3,10);
    
    
    printArray(arr1,10);
    printArray(arr2,10);
    printArray(arr3,10);

    return 0;
}
