#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int k) {
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==k)
        return mid;
        else if(k>arr[mid])
        start=mid+1;
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,4,68};
    cout<<binarysearch(arr,4,68);
}