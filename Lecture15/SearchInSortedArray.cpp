#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    int start =0;
    int end =n-1;
    int mid;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        // check for which side the array is sorted
        else if(arr[start]<arr[mid]) // array is left sorted
        {
            if(arr[start]<=key&&key<arr[mid]){
                end=mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{ // array is right sorted 
            if(key>arr[mid]&&key<=arr[end]){
                start = mid+1;
            }
            else{
                end=mid-1;
            }
        }
    } 
    return -1;
}
int main(){
  int arr[] = {5,6,7,8,9,1,2,3,4};
  int n=9;
  int key = 2;
  cout<<search(arr,n,key);
}