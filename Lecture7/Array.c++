// Array :- it is a collection of same datatype stored in continous locations
#include<iostream>
using namespace std;

int main(){
    // array decalaration
    int arr[5];

    // input arrays elements
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    // printing array elements
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    // sum of array element
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;


}