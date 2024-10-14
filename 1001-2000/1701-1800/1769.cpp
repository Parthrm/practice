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
    vector<int> minOperations(string boxes) {
        int n =boxes.length();
        vector<int> ans(n);
        for(int i=0;i<n;i++)
            if(boxes[i]=='1')
                for(int j=0;j<n;j++)
                    ans[j]+=abs(i-j);
        return ans;
    }
};

int main(){
    Solution s;
    string a = "001011";
    print(s.minOperations(a));
}