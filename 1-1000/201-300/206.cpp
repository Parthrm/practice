#include<bits/stdc++.h>
#include "print.h" 
using namespace std;


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        return head;
        ListNode *p,*q,*r;
        for(p=head,q=head->next;q!=NULL;){
            r=q->next;
            q->next=p;
            p=q;
            q=r;
        }
        head->next=NULL;
        return p;
    }
};

int main(){
    Solution s;
    vector<int>a={1,2,3,4,5};
    ListNode*head=build(a);
    print(head);
    head=s.reverseList(head);
    print(head);
}