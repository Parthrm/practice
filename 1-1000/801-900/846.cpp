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
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)
        return false;
        
        map<int,int>m;
        for(auto i:hand)m[i]++;

        while(m.size()>0){
            int st = m.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(m[st+i]==0)
                return false;
                else if(m[st+i]==1)
                m.erase(st+i);
                else
                m[st+i]--;
            }
        }

        return true;
    }
};

int main(){
    Solution s;
    vector<int> a = {1,2,3,6,3,4,7,8};
    cout<<s.isNStraightHand(a,3);
    // vector<int> a = {1,2,3,4,5};
    // cout<<s.isNStraightHand(a,4);
}