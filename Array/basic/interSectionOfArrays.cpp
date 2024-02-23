#include <iostream>
#include<vector>
using namespace std;
vector<int> findArrayIntersection(int arr1[],int arr2[],int n, int m){
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> ans;
    //just to print array
    int arr[10];
    
    while (i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[j]);
            arr[k]=arr1[i];
            k++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    
    //ignore this one
    for (int i=0;i<10;i++){
        cout <<arr[i]<<" ";
    }
    return ans;
}
int main() {
    
    //Seriese of natural numbers with one duplicate number
    int arr1[10]={1,2,3,4,5,6,7,8,1,9};
    int arr2[10]={1,2,3,4,5,6,7,11,12,12};
    findArrayIntersection(arr1,arr2,10,10);
    
	return 0;
}