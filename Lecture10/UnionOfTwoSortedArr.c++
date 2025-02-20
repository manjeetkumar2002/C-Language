#include<iostream>
#include<vector>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    // Your code here
    // return vector with correct order of elements
    
    vector<int> ans;
    
    // add the elements of a and b to ans
    for(int i = 0;i<a.size();i++){
        ans.push_back(a[i]);
    }
    for(int i = 0;i<b.size();i++){
        ans.push_back(b[i]);
    }
    // apply the sorting on ans
    
    for(int i = 0;i<ans.size()-1;i++){
        for(int j=i;j>=0;j--){
            if(ans[j]>ans[j+1]){
                int temp = ans[j+1];
                ans[j+1] = ans[j];
                ans[j] = temp;
            }
            else{
                break;
            }
        }
    }
    // removed the duplicates
    vector<int> uniqueArr;
    uniqueArr.push_back(ans[0]);
    
    for(int i =1; i<ans.size();i++){
        if(ans[i]!=ans[i-1]){
            uniqueArr.push_back(ans[i]);
        }
    }
    return uniqueArr;
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {3, 4, 5, 6, 7};

    vector<int> result = findUnion(a, b);

    cout << "Union of Arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}