#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(auto i:a){
        cout.width(4);
        cout<<i;
    }
    cout<<endl;
}


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *t,*p;
        for(t=head;t;t=t->next){
            if(t->val){
                for(p=t->next;p->val!=0;p=p->next)
                    t->val+=p->val;
                t->next=p->next;
            }
        }
        return head->next;
    }
};

void list_print(ListNode *h){
    for(;h;h=h->next){
        cout.width(4);
        cout<<h->val;
    }
    cout<<endl;
}

int main(){
    Solution s;
    vector<int> a = {0,3,1,0,4,5,2,0};
    ListNode * head,*temp;
    head=temp=new ListNode(a[0]);
    for(int i=1;i<a.size();i++){
        temp->next=new ListNode(a[i]);
        temp=temp->next;
    }
    list_print(head);
    temp = s.mergeNodes(head);
    list_print(temp);
}