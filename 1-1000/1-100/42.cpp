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
    int trap(vector<int>& height) {
        if(height.size()<3)return 0;
        auto start = height.begin();
        auto end = height.end();
        int sum = 0;
        int n=height.size();
        int lmax=height[0],rmax=*max_element(start+2,end);
        for(int i=1;i<n-1;i++){
            lmax = max(lmax,height[i-1]);
            rmax = rmax==height[i]?*max_element(start+i+1,end):rmax;
            int h = min(lmax,rmax);
            if(h>height[i])
                sum+=h-height[i];
        }
        return sum;
    }
};

int main(){
    // vector<int>a={4};
    vector<int>a={0,1,0,2,1,0,1,3,2,1,2,1};
    Solution s;
    cout<<s.trap(a);
}