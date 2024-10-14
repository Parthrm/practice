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
    int climbStairs(int n) {
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        // return climbStairs(n-1)+climbStairs(n-2);
        map<int,int>m;
        m.insert({1,1});
        m.insert({2,2});
        for(int i=3;i<=n;i++)
            m.insert({i,m[i-1]+m[i-2]});
        return m[n];
    }
};

int main(){
    Solution s;
    cout<<s.climbStairs(5);
}