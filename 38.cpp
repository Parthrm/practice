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
    string countAndSay(int n) {
        if(n==1)
        return "1";
        string p_rle = countAndSay(n-1);
        string n_rle="";
        int i=0,count=0;
        while(i<p_rle.length()){
            if(i<p_rle.length()-1 and p_rle[i]==p_rle[i+1])
                count++;
            else{
                n_rle+=(to_string(count+1)+to_string(p_rle[i]-'0'));
                count=0;
            }
            i++;
        }
        return n_rle;
    }
};

int main(){
    Solution s;
    cout<<s.countAndSay(4);
}