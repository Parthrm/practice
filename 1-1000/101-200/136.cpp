#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto i:nums)
        ans^=i;
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> a={15,2,9,2,15};    
    cout<<s.singleNumber(a);
}