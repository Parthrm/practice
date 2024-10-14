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
    int find(vector<int>&nums,int k,int low,int high){
        if(low>high)
        return -1;
        int mid = (low+high)/2;
        if(nums[mid]>k)
        return find(nums,k,low,mid-1);
        else if(nums[mid]<k)
        return find(nums,k,mid+1,high);
        else
        return mid;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int index = find(nums,target,0,nums.size()-1);
        if(index==-1)
        return {-1,-1};
        int i,j;
        i=j=index;
        while (i>0 && nums[i-1]==target)
            i--;
        while(j<nums.size()-1 && nums[j+1]==target)
            j++;
        return {i,j};
    }
};

int main(){
    Solution s;
    vector<int> a = {5,7,7,8,8,10};
    print(s.searchRange(a,10));
}