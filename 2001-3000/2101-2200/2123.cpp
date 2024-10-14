#include<bits/stdc++.h>
#include "print.h"
using namespace std;


class Solution {
public:
    int pairSum(ListNode* head) {
        // vector<int> a;
        // int n=0;
        // for(ListNode *temp=head;temp!=nullptr;temp=temp->next,n++)
        // a.push_back(temp->val);
        // for(int i=0;i<n/2;i++)
        // a[i]=a[i]+a[n-i-1];
        // return *max_element(a.begin(),a.begin()+n);

        ListNode *p,*q,*s,*t;
        int m=-1;
        for(p=q=head;q!=NULL and q->next!=NULL;p=p->next,q=q->next->next);
        s=p;
        for(q=p->next;q!=NULL;){
            t=q->next;
            q->next=p;
            p=q;
            q=t;
        }
        for(t=head,q=p;t!=s;t=t->next,q=q->next)
        m=max(m,t->val+q->val);
        return m;
    }
};




int main(){
    Solution s;
    vector<int> a={5,4,2,7,1,1};
    ListNode * head,*temp;
    head=temp=new ListNode(a[0]);
    for(int i=1;i<a.size();i++){
        temp->next=new ListNode(a[i]);
        temp=temp->next;
    }

    cout<<s.pairSum(head);

}