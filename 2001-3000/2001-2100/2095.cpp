#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *p,*q;
        for(p=q=head;q!=NULL and q->next!=NULL;p=p->next,q=q->next->next);
        if(p==head) 
        return head->next;
        else{
            for(q=head;q->next!=p;q=q->next);
            q->next=p->next;
        }
        return head;
    }
};

int main(){
    Solution s;
    vector<int> a={1,3,4,7,1,2,6};
    ListNode *head = build(a);
    print(head);
    head=s.deleteMiddle(head);
    print(head);
}