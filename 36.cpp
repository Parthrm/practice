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
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,vector<pair<int,int>>>m;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
            if(board[i][j]!='.')
                {
                    if(m[board[i][j]].size()>0)
                    for(pair<int,int>location:m[board[i][j]]){
                        if(i==location.first || j==location.second || i/3==location.first/3 && j/3==location.second/3)
                        return false;
                    }
                    m[board[i][j]].push_back({i,j});
                }
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    // vector<vector<char>>board = 
    // {{'5','3','.','.','7','.','.','.','.'}
    // ,{'6','.','.','1','9','5','.','.','.'}
    // ,{'.','9','8','.','.','.','.','6','.'}
    // ,{'8','.','.','.','6','.','.','.','3'}
    // ,{'4','.','.','8','.','3','.','.','1'}
    // ,{'7','.','.','.','2','.','.','.','6'}
    // ,{'.','6','.','.','.','.','2','8','.'}
    // ,{'.','.','.','4','1','9','.','.','5'}
    // ,{'.','.','.','.','8','.','.','7','9'}};
    vector<vector<char>>board = 
    {{'8','3','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}};
    s.isValidSudoku(board)?cout<<"Valid":cout<<"NotValid";
}