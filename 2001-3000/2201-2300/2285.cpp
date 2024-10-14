#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

bool compare(pair<int,int>&a,pair<int,int>&b){
    if(a.second>b.second)
    return true;
    else if(a.second<b.second)
    return false;
    return a.first<b.first;
}

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        map<int,int>m;
        for(auto e:roads)
        {
            m[e[0]]++;
            m[e[1]]++;
        }
        vector<pair<int,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),compare);
        m.clear();
        for(int i=0;i<v.size();i++)
        m[v[i].first]=n-i;
        long long sum=0;
        for(auto e:roads)
            sum+=(m[e[0]]+m[e[1]]);
        return sum;
    }
};

int main(){
    Solution s;
    // vector<vector<int>> a = {{0,1},{1,2},{2,3},{0,2},{1,3},{2,4}};
    vector<vector<int>> a = {{0,3},{2,4},{1,3}};
    cout<<s.maximumImportance(5,a);
}