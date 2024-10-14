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
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i+=2)
            ans.insert(ans.end(),nums[i],nums[i+1]);
        return ans;
    }
};

int main(){
    Solution s;
    // vector<int> a = {1,2,3,4};
    vector<int> a = {1,1,2,3};
    print(s.decompressRLElist(a));
}