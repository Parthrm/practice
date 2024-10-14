#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution{
    bool check(vector<int> positions,int no_of_balls,int dist){
        cout<<"checking dist = "<<dist<<endl;
        int last_placed = positions[0];
        int count = 1;
        for(auto position:positions){
            if(position-last_placed>=dist){
                count++;
                last_placed = position;
                if(count>=no_of_balls)
                return true;
            }
        }
        return false;
    }
    public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int start=position[0];
        int end=position.back();
        int mid,ans=1;
        while (start<=end)
        {
            mid=start+(end-start)/2;
            if(check(position,m,mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> a={5,4,3,2,1,1000000000};
    cout<<s.maxDistance(a,2);
}