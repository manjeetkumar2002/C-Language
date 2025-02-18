#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,13,8,9};
    // print this array like this :-
    // 9,8,13,3,2
    // 8,13,3,2
    // 13,3,2
    // 3,2
    // 2

    for (int i = 0; i < 5; i++)
    {
        for (int j = 4-i; j >=0; j--)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
}