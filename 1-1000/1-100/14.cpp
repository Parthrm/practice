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
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        if(strs.size()==1)return strs[0];
        string ans="";
        for(int i=0;i<200;i++){
            bool found_in_all=true;
            for(int j=0;j<strs.size();j++)
            if(strs[j].length()<i || strs[j][i]!=strs[0][i]){
                    found_in_all=false;
                    break;
            }
            if(found_in_all)
                ans+=strs[0][i];
            else{
                break;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    // vector<string>a = {"flower","flow","flight"};
    // vector<string>a = {"dog","racecar","car"};
    vector<string>a = {"cir","car"};
    cout<<s.longestCommonPrefix(a);
}