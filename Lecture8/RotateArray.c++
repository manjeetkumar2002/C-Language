#include<iostream>
using namespace std;
int main(){
    // rotate the array by one element
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(int);

    int last_element =arr[n-1];
    for (int i = n-2; i >=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last_element;

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    
}