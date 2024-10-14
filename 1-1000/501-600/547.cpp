#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
         set<int> notvisited;
         for(int i=0;i<isConnected.size();notvisited.insert(i++));
         int count=0;
         while(notvisited.size()>0){
            int node = *notvisited.begin();
            queue<int>q;
            q.push(node);
            while(!q.empty()){
                int cur = q.front();
                q.pop();
                notvisited.erase(cur);
                for(int i=0;i<isConnected.size();i++)
                    if(isConnected[cur][i]&&notvisited.count(i)>0)
                        q.push(i);
            }
            count++;
         }
         return count;
    }
};

int main(){
    Solution s;
    // vector<vector<int>> a={{1,1,0},{1,1,0},{0,0,1}};
    vector<vector<int>> a={{1,0,0},{0,1,0},{0,0,1}};
    cout<<s.findCircleNum(a);
}