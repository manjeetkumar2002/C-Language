#include<iostream>
using namespace std;
int findSmallestMissing(int arr[],int n){
    int start = 0;
    int end = n-1;
    int  index = -1;
    while (start<=end)
    {
        int mid = end +(start - end)/2;
        if(mid<arr[mid]){
            // this can be our element 
            index = mid;
            end = mid - 1; // search on left side for smallest one
        }
        else{
            start = mid + 1;
        }
    }
    return index;
}
int main(){
    int arr[] = {0,1,3,4,5,6,7};
    int n = 7;
    cout<<findSmallestMissing(arr,n);
}