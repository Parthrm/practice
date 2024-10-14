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
    int maximizeSum(vector<int>& nums, int k) {
        int m = *max_element(nums.begin(),nums.end());
        return k*m+(k*(k-1))/2;
    }
};


int main(){
    Solution s;
    vector<int> a={5,5,5};
    int k=2;
    cout<<s.maximizeSum(a,k);
}