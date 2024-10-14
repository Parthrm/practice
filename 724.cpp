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
    int pivotIndex(vector<int>& nums) {
        int rsum = 0,lsum=0;
        for(auto &i :nums)rsum+=i;
        for(int i=0;i<nums.size();i++){
            if(lsum==rsum-lsum-nums[i])
            return i;
            lsum+=nums[i];
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> a={1,7,3,6,5,6};
    cout<<s.pivotIndex(a);
}