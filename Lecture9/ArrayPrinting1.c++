#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,13,8,9};
    // print this array like this :-
    // 2 3 13 8 9
    // 2 3 13 8 
    // 2 3 13 
    // 2 3 
    // 2 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}