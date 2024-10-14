class Solution(object):
    def subsets(self, nums):
        ans = [[]]
        for num in nums:
            ans.extend([sub+[num] for sub in ans])
        return ans
    
s = Solution()
print(s.subsets([1,2,3]))
