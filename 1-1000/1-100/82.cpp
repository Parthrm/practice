#include<bits/stdc++.h>
#include "print.h" 
using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head or !head->next)
        return head;
        if(head->val==head->next->val){
            ListNode *p;
            for(p=head->next;p and p->val==head->val;p=p->next);
            return deleteDuplicates(p);
        }
        else{
            head->next=deleteDuplicates(head->next);
            return head;
        }
    }
};

int main(){
    Solution s;
    vector<int> a={1,1};
    ListNode *head=build(a);
    print(head);
    head=s.deleteDuplicates(head);
    print(head);
}