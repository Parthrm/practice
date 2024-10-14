#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(result,temp,nums,0);
        return result;
    }

    void backtrack(vector<vector<int>> &result,vector<int> &temp, vector<int> &nums,int start){
        result.push_back(temp);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            backtrack(result,temp,nums,i+1);
            temp.pop_back();
        }
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,2};
    auto ans = s.subsetsWithDup(nums);
    for(auto i:ans)print(i);
}