#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,6,3,1,2,5};
    int n = sizeof(arr)/sizeof(int);
    int N = n+1;
    int sum = N * (N + 1)/2;
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum+=arr[i];
    }
    cout<<sum-arr_sum;
}