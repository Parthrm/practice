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
    int buyChoco(vector<int>& prices, int money) {
        int a = prices[0];
        int b = prices[1];
        if(a>b){int t=a;a=b;b=t;}
        for(int i=2;i<prices.size();i++)
        {
            if(prices[i]<=a){b=a;a=prices[i];}
            else if(prices[i]>=a && prices[i]<=b)b=prices[i];
        }
        cout<<a<<" "<<b<<endl;
        if((a+b)<=money)
        return money - (a+b);
        else
        return money;
    }
};

int main(){
    Solution s;
    vector<int> a {98,54,6,34,66,63,52,39};
    int m = 62;
    cout<<s.buyChoco(a,m);;
}