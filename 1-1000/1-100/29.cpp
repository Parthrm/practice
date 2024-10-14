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
    int divide(int dividend, int divisor) {
        bool a = dividend<0;
        bool b = divisor<0;
        dividend=abs(dividend);
        divisor=abs(divisor);
        int ans=0;
        while (dividend>=divisor)
        {
            ans++;
            dividend-=divisor;
        }
        return ans * (a^b?1:-1);   
    }
};

int main(){
    Solution s;
    int dividend=-2147483648,divisor=-1;
    // cout<<s.divide(dividend,divisor);
}