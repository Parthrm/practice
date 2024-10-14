#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<5)
        return 0;
        sort(nums.begin(),nums.end());
        print(nums);
        deque<int>q(nums.begin(),nums.end());
        int a,b,c,d;
        for(int i=0;i<3;i++){
            a=q.begin()[0];
            b=q.begin()[1];
            c=q.end()[-2];
            d=q.end()[-1];
            if(max(d-a,d-b)<max(c-a,c-b))
                q.pop_front();
            else
                q.pop_back();
            print(q);
            
        }
        return q.back()-q.front();
        
    }
};

int main(){
    Solution s;
    // vector<int> a={6,6,0,1,1,4,6};
    // cout<<s.minDifference(a);
    for(int i = 0; i <= 3; i++) {
        cout<<10 - (3 - i) - 1<<" "<<i;
        cout<<endl;
    }
}