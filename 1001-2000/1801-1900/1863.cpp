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
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size(),ans=0;
        for(int i=0;i<(1<<n);i++){
            int score=0;
            for(int j=0;j<n;j++)
                if((i&(1<<j))!=0)
                    score^=nums[j];
            ans+=score;
        }
        return ans;
    }
};

int main(){
    Solution s;
    // vector<int> a = {1,3};
    vector<int> a = {3,4,5,6,7,8};
    cout<<s.subsetXORSum(a);w
}