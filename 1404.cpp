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
    int numSteps(string s) {
        if(s[s.length()-1]=='0')
        return 1 + numSteps(s.substr(0,s.length()-1));
        if(s=="1")
        return 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0')
            {
                s[i]='1';
                break;
            }
            s[i]='0';
        }
        if(s[0]=='0')
        s="1"+s;
        return 2 + numSteps(s.substr(0,s.length()-1));
    }
};

int main(){
    Solution s;
    cout<<s.numSteps("1");
}