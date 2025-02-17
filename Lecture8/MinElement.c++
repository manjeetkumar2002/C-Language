#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,3,11,8,7,-2};
    int Min = arr[0];

    for (int  i = 1; i < 6; i++)
    {
        if(arr[i]<Min)
        Min = arr[i];
    }
    cout<<Min;
}