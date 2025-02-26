#include<iostream>
#include<vector>
using namespace std;
int main(){
  
}
int leftMost(vector<long long> v ,long long x){
    int left_index = -1;
    for(int i = 0;i<v.size();i++){
        if(v[i]==x){
            left_index = i;
            return left_index;
        }
    }
    return left_index;
}

int rightMost(vector<long long> v ,long long x){
    int right_index = -1;
    for(int i = v.size()-1;i>=0;i--){
        if(v[i]==x){
            right_index = i;
            return right_index;
        }
    }
    return right_index;
}
pair<long,long> indexes(vector<long long> v, long long x)
{
    pair<long,long> ans;
    
    ans.first = leftMost(v,x);
    ans.second = rightMost(v,x);
    return ans;
}