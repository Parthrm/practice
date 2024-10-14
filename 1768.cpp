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
    string mergeAlternately(string word1, string word2) {
        int i=0,n=word1.length(),m=word2.length();
        string ans;
        while(i<n and i<m){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
            i++;
        }
        if(i<n)
            ans+=word1.substr(i,n);
        if(i<m)
            ans+=word2.substr(i,m);
        return ans;
    }
};

int main(){
    Solution s;
    string w1 = "ab",w2="pqrs";
    cout<<s.mergeAlternately(w1,w2);
}