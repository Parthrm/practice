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
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back(vector<int>(0));
        for(auto i:nums){
            int n = ans.size();
            for(int j=0;j<n;j++){
                vector<int>sub(ans[j]);
                sub.push_back(i);
                ans.push_back(sub);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> a = {};
    auto ans = s.subsets(a);
    for(auto &i:ans)print(i);
}