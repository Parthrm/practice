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
    int longestPalindrome(string s) {
        map<char,bool>m;
        int ans=0;
        for(char &i:s){
            if(m[i])
            {
                m.erase(i);
                ans++;
            }
            else{
                m[i]=true;
            }
        }
        return ans*2+(m.size()>0);
        
    }
};

int main(){
    string s1 = "abccccdd";
    // string s1 = "a";
    Solution s;
    // cout<<s.longestPalindrome(s1);
    int n=11;
    cout<<!(n&3);
}