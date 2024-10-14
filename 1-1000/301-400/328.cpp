#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<ListNode*>odd,even;
        int count=1;
        for(ListNode *temp=head;temp;temp=temp->next,count++)
        count&1?odd.push_back(temp):even.push_back(temp);
        ListNode *ans=head;
        for(auto i:odd){
            cout<<i->val<<endl;
            if(i==head)
            continue;
            ans->next=i;
            ans=i;
        }
        for(auto i:even){
            ans->next=i;
            ans=i;
        }
        ans->next=NULL;
        return head;
    }
};
class A{
    public:
    A(){
        cout<<"a";
    }
    void display(){
        cout<<"a";
    }
};
class B:public A{
    public:
    B(){
        cout<<"b";
    }
    void display(){
        cout<<"b";
    }
};
class C:public B{
    public:
    C(){
        cout<<"c";
    }
    void display(){
        cout<<"c";
    }
};
int main(){
    // Solution s;
    // vector<int> a={1,2,3,4,5};
    // ListNode *head=build(a);
    // print(head);
    // head=s.oddEvenList(head);
    // print(head);
    C *a = new C;
    a->display();
}