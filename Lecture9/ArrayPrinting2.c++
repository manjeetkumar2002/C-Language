#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,13,8,9};
    // print this array like this :-
    // 2 3 13 8 9
    // 3 13 8 9
    // 13 8 9
    // 8 9
    // 9

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
}