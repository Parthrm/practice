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
    int count(string s){
        int count=0;
        for(auto i:s)i=='1'?count++:0;
        return count;
    }   
    int numberOfBeams(vector<string>& bank) {
        int ans=0,last_row,new_row;
        int i=0;
        while( i<bank.size() && (last_row=count(bank[i]))==0)i++;
        for(++i;i<bank.size();i++){
            while(i<bank.size() && (new_row=count(bank[i]))==0)i++;
            if(i==bank.size())
            break;
            ans+=last_row*new_row;
            last_row=new_row;
            
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<string> a= {"000","111","000"};
    cout<<s.numberOfBeams(a);
}