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
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int ans=0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(int i=0;i<seats.size();i++)
        ans+=abs(seats[i]-students[i]);
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> a1={3,1,5},a2={2,7,4};
    vector<int> a={12,14,19,19,12};
    vector<int> b={19,2,17,20,7};
    cout<<s.minMovesToSeat(a,b);
    
    print(a);
    print(b);
    cout<<accumulate(a.begin(),a.end(),0)<<endl;
    cout<<accumulate(b.begin(),b.end(),0)<<endl;
    // [12,14,19,19,12] -> 
    // [19,2,17,20,7]
    // [12,0,0,0,12]
    // [0,10,3,1,5]
}