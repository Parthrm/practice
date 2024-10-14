#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double total_waiting = 0;
        int time = customers[0][0];
        for(auto c:customers){
            if(c[0]>time){
                total_waiting+=c[1];
                time=c[1]+c[0];
            }
            else{
                total_waiting+= c[1]+(time-c[0]);
                time+=c[1];
            }
        }
        return total_waiting/customers.size();
    }
};

int main(){
    Solution s;
    vector<vector<int>> a={{1,2},{2,5},{4,3}};
    cout<<s.averageWaitingTime(a);
}