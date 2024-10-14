class Solution(object):
    def mySqrt(self,x):
        ans=0
        while ans*ans<=x:
            ans+=1
        return ans-1
print(Solution().mySqrt(16))
# Rank 606,878