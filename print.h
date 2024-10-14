#include<bits/stdc++.h>
using namespace std;
/*-------------------------------------
            data structures
-------------------------------------*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/*-------------------------------------
            print functions
-------------------------------------*/
void print(vector<int>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}
void print(set<string>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}
void print(vector<int>a,int last_index){
    for(int i=0;i<last_index;i++){
        cout.width(4);
        cout<<a[i];
    }
    cout<<endl;
}
void print(vector<int>a,int first_index,int last_index){
    for(int i=first_index;i<last_index;i++){
        cout.width(4);
        cout<<a[i];
    }
    cout<<endl;
}
void print(map<int,int>m){
    for(auto a:m){
        cout<<a.first<<" "<<a.second<<endl;
    }
    cout<<endl;
}
void print(stack<int>s){
    while(!s.empty()){
        cout.width(4);
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}
void print(deque<int>s){
    while(!s.empty()){
        cout.width(4);
        cout<<s.front();
        s.pop_front();
    }
    cout<<endl;
}
void print(ListNode *head){
    for(;head!=nullptr;head=head->next){
        cout.width(4);
        cout<<head->val;
    }
    cout<<endl;
}

void print(TreeNode *root){
    if(root==nullptr)return;
    cout.width(4);
    cout<<root->val;
    print(root->left);
    print(root->right);
}
void print(stack<pair<int,int>>s){

    if(s.empty())
    {cout<<"stack empty";
    return;}
    for(;!s.empty();s.pop())
        cout<<s.top().first<<" "<<s.top().second<<endl;
    cout<<endl;
}
/*-------------------------------------
            custom functions
-------------------------------------*/
ListNode* build(vector<int> a){
    ListNode * head,*temp;
    head=temp=new ListNode(a[0]);
    for(int i=1;i<a.size();i++){
        temp->next=new ListNode(a[i]);
        temp=temp->next;
    }
    return head;
}
int to_int(string s){
    int n=0;
    for(auto &i:s)n=n*10+i-'0';
    return n;
}
// TreeNode* build(vector<string>&a,int index){
//     if(index>=a.size() or a[index]=="null")
//     {
//         cout<<"index = "<<index<<"value = null"<<endl;
//         return NULL;
//     }
//     int n=to_int(a[index]);
//     cout<<"index = "<<index<<"value ="<<n<<endl;
//     TreeNode *root=new TreeNode(n);
//     root->left=build(a,2*index+1);
//     root->right=build(a,2*index+2);
//     return root;
// }