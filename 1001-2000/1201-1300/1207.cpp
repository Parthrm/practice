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
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m1,m2;
        for(auto &i:arr)m1[i]++;
        for(auto &i:m1){
            if(m2[i.second])
            return false;
            else
            m2[i.second]=true;
        }
        return true;

    }
};

int main(){
    Solution s;
    vector<int> a={1,2};
    cout<<s.uniqueOccurrences(a);
}