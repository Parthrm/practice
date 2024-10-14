#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0,index=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                index++;
                count++;
                continue;
            }
            if(nums[i]==nums[index-1]){
            if(count<2){
                nums[index++]=nums[i];
                count++;
            }}
            else{
                nums[index++]=nums[i];
                count=1;
            }
        }
        return index;
    }
};

int main(){
    Solution s;
    vector<int> a={0,0,1,1,1,1,2,3,3};
    print(a);
    int k=s.removeDuplicates(a);
    cout<<k<<endl;
    print(a,k);
}