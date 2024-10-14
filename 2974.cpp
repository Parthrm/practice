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
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2)swap(nums[i],nums[i+1]);
        return nums;
    }
};

int main(){
    Solution s;
    vector<int> a = {2,5};
    print(s.numberGame(a));
}