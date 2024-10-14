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
    vector<vector<int>> generate(int numRows) {
        if(numRows==0)return {{}};
        vector<vector<int>>res(numRows);
        for(int i=0;i<numRows;i++){
            res[i].resize(i+1);
            for(int j=0;j<=i;j++){
                if(j==0||j==i)res[i][j]=1;
                else res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    auto ans = s.generate(5);
    for(auto i:ans)
    print(i);
}