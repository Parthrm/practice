#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int>visited;
        queue<int>q;
        for(auto &i:rooms[0])
            q.push(i);
        visited.insert(0);
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            if(visited.count(cur)==0){
                visited.insert(cur);
                for(auto &i:rooms[cur])
                q.push(i);
            }
        }
        return visited.size()==rooms.size();
    }
};

int main(){
    Solution s;
    // vector<vector<int>> a={{1},{2},{3},{}};
    vector<vector<int>> a={{1,3},{3,0,1},{2},{0}};
    cout<<s.canVisitAllRooms(a);
}