#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}

bool compare(pair<int,int>&a,pair<int,int>&b){
    if(a.second==b.second)
    return a.first>b.first;
    return a.second<b.second;
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto &i:nums)m[i]++;
        vector<pair<int,int>>elems(m.begin(),m.end());

        for(auto &i:elems)
        cout<<i.first<<" "<<i.second<<endl;
        cout<<endl;


        sort(elems.begin(),elems.end(),compare);
        vector<int> ans;

        for(auto &i:elems)
        cout<<i.first<<" "<<i.second<<endl;
        cout<<endl;
        
        for(auto p:elems)
            for(;p.second;p.second--)
                ans.push_back(p.first);
        return ans;

    }
};

int main(){
    Solution s;
    vector<int> a={1,5,0,5};
    print(s.frequencySort(a));
}