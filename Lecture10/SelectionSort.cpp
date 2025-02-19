#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,1,4,6,2,9};

    int N = 6;

    for (int i = 0; i < N-1; i++)
    {
        int index = i;
        for (int j = i; j <=N-1; j++)
        {
            if(arr[index]>arr[j]){
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    // print the array
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}