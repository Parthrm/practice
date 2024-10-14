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
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1,s2;
        for(auto &i:nums1)s1.insert(i);
        for(auto &i:nums2)s2.insert(i);
        unordered_map<int,bool> m1,m2;
        vector<vector<int>>ans(2,vector<int>(0));
        for(auto &i:s1)m1[i]=true;
        for(auto &i:s2){
            m2[i]=true;
            if(!m1[i])
                ans[1].push_back(i);
        }
        for(auto &i:s1)
            if(!m2[i])
                ans[0].push_back(i);
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> a1={1,2,3,3};
    vector<int> a2={1,1,2,2};
    auto ans = s.findDifference(a1,a2);
    for(auto i:ans)print(i);
}