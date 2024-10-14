#include<bits/stdc++.h>
using namespace std;
void print(vector<string>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2)return s;
        vector<string> strings(numRows,"");
        string ans="";
        int i=0;bool direction = true;
        for(auto c:s){
            strings[i]+=c;
            if(i==0&&!direction)
            direction = true;
            else if(i==numRows-1&&direction)
            direction = false;
            direction?i++:i--;
        }
        for(auto i:strings)ans+=i;
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.convert("PAYPALISHIRING",4)<<endl;
    cout<<"PINALSIGYAHRPI";
}