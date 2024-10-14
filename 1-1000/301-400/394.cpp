#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}
void print(stack<int>a){
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
    cout<<endl;
}
void print(stack<string>a){
    if(a.empty())
    {
        cout<<"empty"<<endl;
        return;
    }
    while(!a.empty()){
        cout<<(a.top()==""?".":a.top())<<" ";

        a.pop();
    }
    cout<<endl;
}

class Solution {
public:

    // 3[a]2[bc] 
    string helper(int &idx, string str){
        int n=0;
        string ans="";

        while(idx<str.size()){
            char curr=str[idx];
            if(curr>='0' && curr <='9'){
                n= n*10 + curr- '0';
            }
            else if( curr=='['){
                string temp=helper(++idx, str);
                while(n>0){
                    ans+= temp;
                    n--;
                }
            }
            else if(curr==']'){
                return ans;
            }
            else{
                ans+=curr;
            }
            idx++;
        }
        return ans;
        
    }
    string decodeString(string s) {
        int i=0;
        return helper(i,s);
    }
};

int main(){
    Solution s;
    auto ans = s.decodeString("3[z]2[2[y]pq4[2[jk]e1[f]]]ef");
    cout<<(ans=="zzzyypqjkjkefjkjkefjkjkefjkjkefyypqjkjkefjkjkefjkjkefjkjkefef")<<endl;
    cout<<ans<<endl;
    cout<<"zzzyypqjkjkefjkjkefjkjkefjkjkefyypqjkjkefjkjkefjkjkefjkjkefef"<<endl;
    // cout<<s.decodeString("3[a]2[bc]");
    // cout<<s.decodeString("2[abc]3[cd]ef");
}