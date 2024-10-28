#include<bits/stdc++.h>
#include "../../print.h" 
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i=-1,j=s.length(),n=s.length();
        while(i<j){
            do{i++;} while (!isalnum(s[i]) and i<n-1);
            do{j--;} while (!isalnum(s[j]) and j>0);
            if(i>j) break;
            if(tolower(s[i]) != tolower(s[j]))
            return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    cout<<(s.isPalindrome("A man, a plan, a canal: Panama")); // true
    
}