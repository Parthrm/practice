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
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        // [-2,-2,1,-2]
        for(auto &a:asteroids){
            if(s.empty() or a>0)
            {
                s.push(a);
                continue;
            }
            int t=s.top();
            if(t>0){
            for(;t>0;t=s.top()){
                if(t==-a)
                {
                    s.pop();
                    break;
                }
                else if(t<-a)
                s.pop();
                else
                break;
            }}
            else{
                s.push(a);
            }
        }
        vector<int>ans;
        for(;!s.empty();s.pop())ans.push_back(s.top());
        return vector<int>(ans.rbegin(),ans.rend());
    }
};

int main(){
    Solution s;
    // vector<int> a={ 5,10,-5};
    // vector<int> a={ 8,-8};
    vector<int> a={ 10,1,2,-5};
    // s.asteroidCollision(a);
    print(s.asteroidCollision(a));
}