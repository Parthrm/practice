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
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        for(int i=1;i<word1.size();i++)word1[0]+=word1[i];
        for(int i=1;i<word2.size();i++)word2[0]+=word2[i];
        return ((word1[0].compare( word2[0]))==0?true:false);
    }
};

int main(){
    Solution s;
    vector<string> a = {"a", "cb"};
    vector<string> b = {"ab", "c"};
    cout<<s.arrayStringsAreEqual(a,b);
}