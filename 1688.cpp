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
    int numberOfMatches(int n) {
        if(n==1||n==2)return 1;
        else if(n==0)return 0;
        return numberOfMatches(n&1?n/2+1:n/2) + n/2;
    }
};

int main(){
    Solution s;
    cout<<s.numberOfMatches(14);
}