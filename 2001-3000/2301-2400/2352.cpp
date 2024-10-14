#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(auto i:a){
        cout.width(8);
        cout<<i;
    }
    cout<<endl;
}

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0,n=grid.size();
        vector<string> row(n,""),col(n,"");
        unordered_map<string,int>m;
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            row[i]+=to_string(grid[i][j])+",";
            col[j]+=to_string(grid[i][j])+",";
        }
        for(auto &i:row)
        m[i]++;
        for(auto &i:col)
        ans+=m[i];
        return ans;
    }
};

int main(){
    Solution s;
    // vector<vector<int>> a={ {3,2,1},
    //                         {1,7,6},
    //                         {2,7,7}};
    // vector<vector<int>> a={ {1,11},
    //                         {11,1}};
    // vector<vector<int>> a={{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};
    vector<vector<int>> a={{3,3,3,6,18,3,3,3,3,3},
                            {3,3,3,3,1,3,3,3,3,3},
                            {3,3,3,3,1,3,3,3,3,3},
                            {3,3,3,3,1,3,3,3,3,3},
                            {1,1,1,11,19,1,1,1,1,1},
                            {3,3,3,18,19,3,3,3,3,3},
                            {3,3,3,3,1,3,3,3,3,3},
                            {3,3,3,3,1,3,3,3,3,3},
                            {3,3,3,1,6,3,3,3,3,3},
                            {3,3,3,3,1,3,3,3,3,3}};
    cout<<s.equalPairs(a);
    // cout<<pow(10,max(1,(int)ceil(log10(11))));
}