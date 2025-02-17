#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,5,7,9,10};
    int N = sizeof(arr)/sizeof(int);
    for (int i = 0; i < N; i++)
    {
        // if (arr[i]%2!=0)
        // {
        //     cout<<arr[i]<<" ";
        // }
        if (arr[i]%2==1||arr[i]%2==-1)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
}