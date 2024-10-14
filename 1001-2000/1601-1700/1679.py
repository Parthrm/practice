class Solution:
    def maxOperations(self, nums: list[int], k: int) -> int:
        m = {}
        count=0
        for i in nums:
            if(i>=k):
                continue
            try:
                if(m[k-i]>0):
                    count+=1
                    m[k-i]-=1
                else:
                    m[i]=m.get(i,0)+1
            except:
                m[i]=m.get(i,0)+1
        return count
# print(Solution().maxOperations([2,5,4,4,1,3,4,4,1,4,4,1,2,1,2,2,3,2,4,2],3))

