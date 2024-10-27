#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        if(n==1 or n==7)
        return true;
        else if(n<10)
        return false;
        else{
            int sum = 0;
            while(n!=0){
                sum += (n%10)*(n%10);
                n = n/10;
            }
            return isHappy(sum);
        }
    }
};

int main(){
    Solution s;
    cout<<s.isHappy(19)<<endl;
}