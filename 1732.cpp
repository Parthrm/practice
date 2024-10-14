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
    int largestAltitude(vector<int>& gain) {
        int ans=0,altitude=0;
        for(auto i:gain)
        {
            altitude+=i;
            ans=max(ans,altitude);
        }
        return max(0,ans);
    }
};

int main(){
    Solution s;
    // vector<int> a={-5,1,5,0,-7};
    vector<int> a={-4,-3,-2,-1,4,3,2};
    cout<<s.largestAltitude(a);
}