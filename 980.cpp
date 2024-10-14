#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
    int ans,n,m;
    void find(pair<int,int>s,pair<int,int>e,vector<vector<int>>grid,int remaining){
        // visited_sequence.push(s);
        // for(auto i:grid)print(i);
        // cout<<s.first<<" "<<s.second<<endl;
        // cout<<e.first<<" "<<e.second<<endl;
        // cout<<remaining<<endl;
        int temp;
        if(s==e)
        {
            // cout<<"ans found"<<endl;
            ans++;
            return;
        }
        // move up
        if(s.first > 0 and (!grid[s.first-1][s.second] or (grid[s.first-1][s.second]==2 and remaining+1==n*m)))
        {
            // cout<<"moving up"<<endl;
            temp=grid[s.first-1][s.second];
            grid[s.first-1][s.second]=-1;
            find(pair<int,int>(s.first-1,s.second),e,grid,remaining+1);
            grid[s.first-1][s.second]=temp;
        }
        // move down
        if(s.first < m-1 and (!grid[s.first+1][s.second] or (grid[s.first+1][s.second]==2 and remaining+1==n*m))){
            // cout<<"moving down"<<endl;
            temp=grid[s.first+1][s.second];
            grid[s.first+1][s.second]=-1;
            find(pair<int,int>(s.first+1,s.second),e,grid,remaining+1);
            grid[s.first+1][s.second]=temp;
        }
        // move right
        if(s.second < n-1 and (!grid[s.first][s.second+1] or (grid[s.first][s.second+1]==2 and remaining+1==n*m))){
            cout<<"moving right"<<endl;
            temp=grid[s.first][s.second+1];
            grid[s.first][s.second+1]=-1;
            find(pair<int,int>(s.first,s.second+1),e,grid,remaining+1);
            grid[s.first][s.second+1]=temp;
        }
        // move left
        if(s.second > 0 and (!grid[s.first][s.second-1] or (grid[s.first][s.second-1]==2 and remaining+1==n*m))){
            // cout<<"moving left"<<endl;
            temp=grid[s.first][s.second-1];
            grid[s.first][s.second-1]=-1;
            find(pair<int,int>(s.first,s.second-1),e,grid,remaining+1);
            grid[s.first][s.second-1]=temp;
        }
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        pair<int,int>start,end;
        int count=0;
        ans=0;
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            if(grid[i][j]==1)
            start={i,j};
            else if(grid[i][j]==2)
            end={i,j};
            else if(grid[i][j]==-1)
            count++;
        }
        find(start,end,grid,1+count);
        return ans;
    }
};

int main(){
    Solution s;
    // vector<vector<int>> a={{1,0,0,0},{0,0,0,0},{0,0,0,2}};
    // vector<vector<int>> a={{0,1},{2,0}};
    vector<vector<int>> a={{1,0,0,0},{0,0,0,0},{0,0,2,-1}};
    cout<<s.uniquePathsIII(a);
}