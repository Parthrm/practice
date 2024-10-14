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
    void sortColors(vector<int>& nums) {

        // using a frequency array
        vector<int>colour_freq(3,0);

        //building the frequency array by incrementing the values
        for(auto &i:nums)
            colour_freq[i]++;

        // updating the origial array
        int j=0;
        for(int i=0;i<3;i++)
            for(;colour_freq[i]>0;colour_freq[i]--)
                nums[j++]=i;
    }
};

int main(){
    Solution s;
    vector<int> a = {2,0,2,1,1,0};
    s.sortColors(a);
    print(a);
}