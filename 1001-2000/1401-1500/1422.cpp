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
    int maxScore(string s) {
        int len = s.length();
        vector<int>z(len),o(len);
        
        z[0] = (s[0]=='0'?1:0);
        o[len-1]=(s[len-1]=='1'?1:0);

        for(int i=1;i<s.length();i++)
        z[i]=(z[i-1]+(s[i]=='0'?1:0));
        
        for(int i=len-2;i>=0;i--)
        o[i]=(o[i+1]+(s[i]=='1'?1:0));

        int ans = INT_MIN;
        for(int i=0;i<len-1;i++)ans=max(ans,z[i]+o[i+1]);
        return ans;
    }
};

int main(){
    Solution s;
    string a = "1111";
    cout<<s.maxScore(a);
}