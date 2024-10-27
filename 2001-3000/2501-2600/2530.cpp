#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> maxHeap (nums.begin(),nums.end());
        long long score=0;
        while(k--){
            int top = maxHeap.top();
            maxHeap.pop();
            score+=top;
            maxHeap.push((top+2)/3);
        }
        return score;
    }
};

int main(){
    Solution s;
    // vector<int> a = {1,10,3,3,3};
    vector<int> a = {756902131,995414898,95906472,149914376,387433380,848985151};
    int k = 6;
    cout<<s.maxKelements(a,k);
}