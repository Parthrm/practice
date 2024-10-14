class Solution:
    def findMaxAverage(self, nums: list[int], k: int) -> float:
        cur_sum = sum(nums[0:k])
        ans = cur_sum
        for i in range(k,len(nums)):
            cur_sum+=nums[i]-nums[i-k]
            ans=max(ans,cur_sum)
        return ans/k
# print(Solution().findMaxAverage([1,12,-5,-6,50,3],4))    
print(Solution().findMaxAverage([0,4,0,3,2],1))    