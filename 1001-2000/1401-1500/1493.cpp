#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        stack<int>s;
        int count=0;
        for(auto i:nums){
            if(i==0){
                s.push(count);
                count=0;
            }
            else
            count++;
        }
        s.push(count);
        print(s);
        if(s.size()==1)
        return max(s.top()-1,0);

        int a=0,b=s.top(),m=0;
        s.pop();
        for(;!s.empty();s.pop()){
            a=b;
            b=s.top();
            m=max(m,a+b);
        }
        return m;

    }
};

int main(){
    Solution s;
    vector<int> a={0,0,1,1};
    cout<<s.longestSubarray(a);
}