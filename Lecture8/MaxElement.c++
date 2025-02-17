#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,3,11,8,7,-2};
    int max = arr[0];

    for (int  i = 1; i < 6; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    cout<<max;
}