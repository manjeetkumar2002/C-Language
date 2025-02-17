#include<iostream>
using namespace std;
// problem :- every element in the array is present twice expect one , find that element 
int main(){
    int arr[] = {1,2,3,4,3,2,4,3,3,1,6};
    int N = sizeof(arr)/sizeof(int);


    // Approach 1:- using XOR operation
    // int ans = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     ans = ans ^ arr[i];
    // }
    // cout<<"unique element : "<<ans;

    // approach 2 :-
    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int  j = 0; j < N; j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count==1){
            cout<<"unique element : "<<arr[i];
            return 0;
        }
    }
    
}