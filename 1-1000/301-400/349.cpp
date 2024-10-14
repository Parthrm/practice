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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // set<int>s1,s2;
        // for(auto i:nums1)s1.insert(i);
        // for(auto i:nums2)s2.insert(i);
        // vector<int>ans(s1.size()+s2.size());
        // auto e = set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),ans.begin());
        // return vector<int>(ans.begin(),e);

        set<int>s,ans;
        for(auto i:nums1)s.insert(i);
        for(auto i:nums2)
            if(s.count(i)>0)
                ans.insert(i);
        return vector<int>(ans.begin(),ans.end());

    }
};

int main(){
    Solution s;
    vector<int> n1 = {1,2,2,1};
    vector<int> n2 = {2,2};
    print(s.intersection(n1,n2));
}