#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bin_search(vector<int>&nums,int low,int high,int target){
        cout<<"searching in range : "<<low<<" "<<high<<endl;
        if(low>high)
        return -1;
        int mid=(low+high)/2;
        if(nums[mid]<target)
        return bin_search(nums,mid+1,high,target);
        else if(nums[mid]>target)
        return bin_search(nums,low,mid-1,target);
        else return mid;
    } 
    int search(vector<int>& nums, int target) {
        if(nums.empty())return -1;
        if(nums.size()==1)return nums[0]==target?0:-1;
        int pivot=0;
        int n=nums.size();
        while(pivot<n-1&&nums[pivot]>nums[n-1])pivot++;

        if(pivot==0)
        return bin_search(nums,0,n-1,target);

        if(nums[0]<=target && target<=nums[pivot-1])
        return bin_search(nums,0,pivot-1,target);
        else
        return bin_search(nums,pivot,n-1,target);
    }
};
int main(){
    Solution s;
    vector<int>a = {4,5,6,7,0,1,2,};
    cout<<s.search(a,-1);
    return 0;
}