#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        map<int, int> jobs;
        int max_diff=INT_MIN,min_diff=INT_MAX,ans=0;
        for(int i=0;i<difficulty.size();i++)
        {
            jobs[difficulty[i]]=max(profit[i],jobs[difficulty[i]]);
            max_diff=max(max_diff,difficulty[i]);
            min_diff=min(min_diff,difficulty[i]);
        }
        
        print(jobs);
        for(int j=min_diff+1;j<=max_diff;j++)
        jobs[j]=max(jobs[j],jobs[j-1]);
        print(jobs);
        cout<<endl;
        cout<<endl;
        // return  0;
        for(int i=0;i<worker.size();i++){
            cout<<worker[i]<<" "<<jobs[worker[i]]<<endl;
            ans+=jobs[worker[i]]; 
        }
        return ans;
    }
};

int main(){
    Solution s;
    // vector<int> a={2,4,6,8,10};
    // vector<int> b={10,20,30,40,50};
    // vector<int> c={4,5,6,7};
    // vector<int> a={85,47,57};
    // vector<int> b={24,66,99};
    // vector<int> c={40,25,25};
    // vector<int> a={5,50,92,21,24,70,17,63,30,53};
    // vector<int> b={68,100,3,99,56,43,26,93,55,25};
    // vector<int> c={96,3,55,30,11,58,68,36,26,1};
    vector<int> a={13,37,58};
    vector<int> b={13,37,58};
    vector<int> c={34,73,45};
    cout<<s.maxProfitAssignment(a,b,c);

}