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
    
    string removeStars(string s) {
        stack<char>m;
        for(auto i:s)
        if(i=='*'){
            if(!m.empty())
                m.pop();
        }
        else
            m.push(i);
        string ans="";
        for(;!m.empty();m.pop())ans.push_back(m.top());
        return string(ans.rbegin(), ans.rend());
    }
};

int main(){
    Solution s;
    cout<<s.removeStars("leet**cod*e");
    // cout<<s.removeStars("erase******");
}