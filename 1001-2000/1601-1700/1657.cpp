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
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
        return false;
        unordered_map<int,int>m1,m2,m3;
        unordered_map<int,bool>m4;
        for(auto &i:word1)m1[i]++;
        for(auto &i:word2)m2[i]++;
        if(m2.size()!=m1.size())
        return false;
        for(auto &i:m1)
        {
            m3[i.second]++;
            m4[i.first]=true;
        }
        for(auto &i:m2)
        {
            if(!m4[i.first] or m3[i.second]==0)
            return false;
            else
            m3[i.second]--;
        }
        return true;
    }
};

int main(){
    Solution s;
    string s1="uau",s2="ssx";
    cout<<s.closeStrings(s1,s2);
}