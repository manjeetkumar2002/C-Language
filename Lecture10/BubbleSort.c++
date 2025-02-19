#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,1,4,6,2,9};

    int N = 6;

    for (int  i = 0; i < N-1; i++)
    {
        for (int j = 0; j <(N-1)-i; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    
    // print the array
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}