#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
    private:
    vector<string>one_digits;
    vector<string>two_digits;
    vector<string>big_values;
    string three_digits(int num){
        string str = "";
        int t;
        if(num>99){
            t = num/100;
            str+=one_digits[t]+" Hundred ";
        }
        if(num%100>=20){
            t = (num%100);
            str+=two_digits[t/10];
            if(t%10!=0)
                str+=" "+one_digits[t%10];
        }
        if(num%100<20){
            t=num%100;
            if(t!=0)
            str+=one_digits[t];
        }
        return str;
    }
    public:
    Solution(){
        one_digits.push_back("Zero");
        one_digits.push_back("One");
        one_digits.push_back("Two");
        one_digits.push_back("Three");
        one_digits.push_back("Four");
        one_digits.push_back("Five");
        one_digits.push_back("Six");
        one_digits.push_back("Seven");
        one_digits.push_back("Eight");
        one_digits.push_back("Nine");
        one_digits.push_back("Ten");
        one_digits.push_back("Eleven");
        one_digits.push_back("Twelve");
        one_digits.push_back("Thirteen");
        one_digits.push_back("Fourteen");
        one_digits.push_back("Fifteen");
        one_digits.push_back("Sixteen");
        one_digits.push_back("Seventeen");
        one_digits.push_back("Eighteen");
        one_digits.push_back("Nineteen");

        two_digits.push_back("Zero");
        two_digits.push_back("Ten");
        two_digits.push_back("Twenty");
        two_digits.push_back("Thirty");
        two_digits.push_back("Forty");
        two_digits.push_back("Fifty");
        two_digits.push_back("Sixty");
        two_digits.push_back("Seventy");
        two_digits.push_back("Eighty");
        two_digits.push_back("Ninety");

        big_values.push_back("");
        big_values.push_back(" Thousand ");
        big_values.push_back(" Million ");
        big_values.push_back(" Billion ");
    } 
    string numberToWords(int num) {
        if(num==0)return one_digits[0];
        string ans = "";
        for(int i=0;num>0;i++){
            int t = num%1000;
            num = num/1000;
            ans = three_digits(t)+big_values[i]+ans;
        }
        return ans;
    }
};
int main(){
    Solution s;
    cout<<s.numberToWords(20)<<"|";x
}