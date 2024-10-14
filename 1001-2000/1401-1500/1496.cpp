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
    bool isPathCrossing(string path) {
        set<pair<int,int>> s;
        s.insert({0,0});
        int x=0,y=0;
        for(auto c:path){
            switch (c){
                case 'N':y++;break;
                case 'S':y--;break;
                case 'E':x++;break;
                case 'W':x--;break;
            }
            if(s.count({x,y})>0)
                return true;
            else
                s.insert({x,y});
        }
        return false;
    }
};

int main(){
    Solution s;
    cout<<s.isPathCrossing("NESWW");
}