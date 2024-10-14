#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int remaining = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=remaining)
                remaining = nums[i];
            else
                remaining--;
            if(remaining==0 and i!=nums.size()-1)
                return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    // vector<int> nums = {2,3,1,1,4};
    vector<int> nums = {3,3,0,0,4};
    cout<<s.canJump(nums);
}