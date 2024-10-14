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
    int minOperations(string s) {
        pair<int,int> odd,even;
        for(int i=0;i<s.length();i++)
            i&1?(s[i]=='0'?odd.first++:odd.second++):(s[i]=='0'?even.first++:even.second++);
        return min(odd.first+even.second,odd.second+even.first);
    }
};

int main(){
    Solution s;
    cout<<s.minOperations("10")<<endl;
    cout<<s.minOperations("1111")<<endl;
    cout<<s.minOperations("0100");
}