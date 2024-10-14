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
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        // using a hash map
        map<int,int>m;
        // answer list
        vector<int>ans;

        // iterating over array 1 to build up the map to find the frequency of each number
        for(int i:arr1)
        m[i]++;

        // iterating over array 2
        for(int i:arr2)
        {
            // adding that number from arr2 as many times it has occured 
            // in arr1 using frequency of it stored in the map 
            while(m[i]>0)
            {
                ans.push_back(i);
                m[i]--;
            }

            // deleting the entry from map
            m.erase(i);
        }

        // adding the remaining contents of the map
        for(pair<int,int> a:m){
            while(a.second>0){
                ans.push_back(a.first);
                a.second--;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> a1={2,3,1,3,2,4,6,7,9,2,19},a2={2,1,4,3,9,6};
    Solution s;
    print(s.relativeSortArray(a1,a2));
}