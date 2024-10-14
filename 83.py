# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
    def add_nos(self,nums):
        head = t = ListNode(nums[0])
        for i in nums[1:]:
            t.next = ListNode(i)
            t=t.next
        return head
class Solution(object):
    # def deleteDuplicates(self,nums):
    #     h = i = j = nums
    #     while j:
    #         if(i.val!=j.val):
    #             i.next=j
    #             i=i.next
    #         j=j.next
    #     i.next=None
    #     return h
    def deleteDuplicates(self,nums):
        if nums==None:
            return None
        def next_val(i,j):
            if j==None:
                return None
            if i.val==j.val:
                return next_val(i,j.next)
            j.next= next_val(j,j)
            return j
        h = nums
        h.next = next_val(h,h)
        return h

# n = [1,2,2,3,4,4,5,5,6]

# h = ListNode().add_nos(n)
# t= h
# while t:
#     print(t.val,end=" ")
#     t=t.next
h = Solution().deleteDuplicates(None)
t= h
print()
while t:
    print(t.val,end=" ")
    t=t.next
