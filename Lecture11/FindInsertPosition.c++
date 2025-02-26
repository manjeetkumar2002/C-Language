#include<iostream>
#include<vector>
using namespace std;
int searchInsertK(vector<int>Arr, int N, int k)
{
   int s = 0, e =Arr.size()-1;
   int index = Arr.size();
   while(s<=e){
       int mid = (s + e) /2;
       if(Arr[mid]==k){
           return mid;
       }
       else if(Arr[mid]>k){
           index = mid;
           e = mid-1;
       }
       else if(k>Arr[mid]){
           s = mid+1;
       }
       else{
           e = mid -1;
       }
   }
   return index;
}
int main(){
    vector<int> arr = {2,3,54,67,88};
    int N =5;
    int k =883;
    cout<<searchInsertK(arr,N,k);
}
