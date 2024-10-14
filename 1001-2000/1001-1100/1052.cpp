#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int original=0,n=customers.size();
        for(int i=0;i<n;i++)original+=customers[i]*(1-grumpy[i]);
        int new_customers_that_are_satisfied=0;
        for(int i=0;i<minutes;i++)new_customers_that_are_satisfied+=customers[i]*grumpy[i];
        int max_new_customers_that_are_satisfied=new_customers_that_are_satisfied+original;
        for(int i=minutes;i<n;i++){
            new_customers_that_are_satisfied=new_customers_that_are_satisfied-customers[i-minutes]*grumpy[i-minutes]+customers[i]*grumpy[i];
            max_new_customers_that_are_satisfied=max(max_new_customers_that_are_satisfied,new_customers_that_are_satisfied+original);
        }
        return max_new_customers_that_are_satisfied;
    }
};

int main(){
    Solution s;
    vector<int> a={1};
    vector<int> b={0};
    int minutes =1;
    cout<<s.maxSatisfied(a,b,minutes);
}