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
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size()-1;
        vector<vector<int>>ans(n-1);
        for(int i=1;i<n;i++)
            for(int j=1;j<n;j++)
                ans[i-1].push_back( max({*max_element(grid[i-1].begin()+j-1,grid[i-1].begin()+j+2),
                                    *max_element(grid[i].begin()+j-1,grid[i].begin()+j+2),
                                    *max_element(grid[i+1].begin()+j-1,grid[i+1].begin()+j+2)}));
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> a={
                            {9,9,8,1},
                            {5,6,2,6},
                            {8,2,6,4},
                            {6,2,2,2}};
    auto ans = s.largestLocal(a);
    for(auto i:ans)print(i);
}