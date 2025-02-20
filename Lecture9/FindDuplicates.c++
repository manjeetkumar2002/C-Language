#include<iostream>
#include<vector>
using namespace std;
vector<int> findDuplicates(int arr[],int n){
    // using bubble sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <=n-1-i ; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
    vector<int> ans;
    ans.push_back(arr[0]);


    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=arr[i-1]){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){
    // problem :- Find duplicates
    int arr[] = {2,3,1,2,5,4,6,2,1};
    vector<int>Duplicates = findDuplicates(arr,9);

    for(int i=0;i<Duplicates.size();i++){
        cout<<Duplicates[i]<<" ";
    }
}
