#include<iostream>
using namespace std;
int main(){
    
    int arr[] = {2,3,13,8,9};
    // print this array like this :-
    // 9,8,13,3,2
    // 9,8,13,3
    // 9,8,13
    // 9,8
    // 9
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j >=i; j--)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}