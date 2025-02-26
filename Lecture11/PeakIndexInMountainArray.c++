#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size()-1;
    int mid ,index = -1;

    while(start<=end){
      mid = end + (start - end) /2;
      if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
          return mid; // ideal condition
      }
      else if(arr[mid-1]<arr[mid]&&arr[mid]<arr[mid+1]){
          // this is when we are on increasing side
          index = mid + 1; 
          start = mid + 1; 
      }
      else if(arr[mid-1]>arr[mid]&&arr[mid]>arr[mid+1]){
          // this is when we are on decreasing side
          index = mid -1;
          end = mid - 1;
      }
    }
    // note :- no need to take index variable because array is guaranteed mountain array 
    return index;
}
int main(){
  vector<int> arr = {2,3,7,8,4,1};
  cout<<peakIndexInMountainArray(arr);
}
