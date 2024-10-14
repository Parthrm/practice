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
    int appendCharacters(string s, string t) {
        int ans=0;
        for(int i=0;i<s.length() and ans<t.length();i++)
            if(s[i]==t[ans])
            ans++;
        return t.length()-ans;
    }
};

int main(){
    string s1 = "coaching", s2 = "coding";
    Solution s;
    cout<<s.appendCharacters(s1,s2);
}