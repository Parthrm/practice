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
    string truncateSentence(string s, int k) {
        int count=0,i,n=s.length();
        for(i=0;i<n;i++){
            if(count>=k)
            break;
            if(s[i]==' ')
            count++;
        }
        return s.substr(0,i);
    }
};

int main(){
    Solution s;
    string a = "Hello how are you Contestant";
    cout<<s.truncateSentence(a,4);
}