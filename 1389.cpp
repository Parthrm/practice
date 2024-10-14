#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<index.size();i++)
        ans.insert(ans.begin()+index[i],nums[i]);
        return ans;
    }
};

int main(){
    vector<int>a = {0,1,2,3,4};
    vector<int>b = {0,1,2,2,1};
    Solution s;
    print(s.createTargetArray(a,b));
}