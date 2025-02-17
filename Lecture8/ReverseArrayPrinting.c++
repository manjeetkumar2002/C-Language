#include<iostream>
using namespace std;
int main(){
    int arr[5]={6,4,2,8,7};
    int N = sizeof(arr)/sizeof(int);
    // print the array in reverse order
    for (int i = N-1 ; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}