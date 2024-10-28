#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int ans=0,ele=*s.begin(),t=1;
        int upperLimit = sqrt(INT_MAX);
        s.erase(ele);
        while (!s.empty()){
            if(ele<=upperLimit and s.count(ele*ele)){
                t+=1;
                s.erase(ele*ele);
                ele = ele*ele;
            }
            else{
                ans=max(ans,t);
                t=1;
                ele = *s.begin();
                s.erase(ele);
            }
        } 
        ans=max(ans,t);
        return ans<=1?-1:ans;
    }
};

int main(){
    Solution s;
    // vector<int> a = {4,3,6,16,8,2};
    // vector<int> a = {2,3,5,6,7};
    vector<int> a = {2,4};
    cout<<s.longestSquareStreak(a);
}