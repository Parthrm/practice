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
    string removeDigit(string number, char digit) {
        string m = "";
        for(int i=0;i<number.length();i++){
            if(number[i]==digit+'0'){
                string temp = i==0?number.substr(1):i==number.length()-1?number.substr(0,i):number.substr(0,i)+number.substr(i+1);
                m = max(m,temp);
            }
        }
        return m;
    }
};

int main(){
    string input = "123";
    int digit = 3;
    Solution s;
    cout<<s.removeDigit(input,digit);
    // cout<<(string("05")<string("8"));
}