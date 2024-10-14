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
    int sumOfMultiples(int n) {
        unordered_set<int>s;int sum=0;
        for(int i=0;i<=n;i+=3)s.insert(i);
        for(int i=0;i<=n;i+=5)s.insert(i);
        for(int i=0;i<=n;i+=7)s.insert(i);
        for(auto i:s)sum+=i;
        return sum;
    }
};

int main(){
    Solution s;
    cout<<s.sumOfMultiples(7);
}