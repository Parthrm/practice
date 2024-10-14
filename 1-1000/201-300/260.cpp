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
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int>s;
        vector<int> ans;
        for(auto i:nums)
        if(s.count(i)==1)
        s.erase(i);
        else
        s.insert(i);
        
        for(auto i:s)
        ans.push_back(i);
        return ans;
    }
};

int main(){
    cout<<"start!"<<endl;
    Solution s;
    // vector<int> a= {1,2,1,3,2,5};
    vector<int> a;
    set<int>temp;
    int n=10000;
    for(int i=0;i<n;i++)
    {
        int t= rand()%n+5;
        if(t!=3 and t!=5)
        temp.insert(t);
    }
    for(auto i:temp)
    {a.push_back(i);a.push_back(i);}
    a.push_back(5);
    a.push_back(3);
    cout<<"start!"<<endl;
    print(s.singleNumber(a));
}