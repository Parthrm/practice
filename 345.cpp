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
    string reverseVowels(string s) {
        for(int i=0,j=s.length()-1;i<j;i++,j--){
            while(i<j and s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u'  and s[i]!='A' and s[i]!='E' and s[i]!='I' and s[i]!='O' and s[i]!='U')
            i++;
            while(i<j and s[j]!='a' and s[j]!='e' and s[j]!='i' and s[j]!='o' and s[j]!='u' and s[j]!='A' and s[j]!='E' and s[j]!='I' and s[j]!='O' and s[j]!='U')
            j--;
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;
        }
        return s;
    }
};

int main(){
    Solution s;
    string s1 = "aA";
    string s2 = "Aa";
    s1 = s.reverseVowels(s1);
    cout<<s1<<endl;
    cout<<(s1==s2);
}