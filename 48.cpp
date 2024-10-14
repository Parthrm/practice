#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        for(int i=0;i<n;i++)
        for(int j=0;j<n/2;j++)
            swap(matrix[i][j],matrix[i][n-j-1]);

        for(int i=0;i<n;i++)
        for(int j=0;j<n-i;j++)
            swap(matrix[i][j],matrix[n-j-1][n-i-1]);
    }
};

int main(){
    Solution s;
    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    for(auto i:a)
        print(i);
    cout<<endl;
    s.rotate(a);
    for(auto i:a)
        print(i);
    cout<<endl;

}