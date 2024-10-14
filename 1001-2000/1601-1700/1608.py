class Solution(object):
    def specialArray(self, nums:list):
        nums.sort()
        for i in range(len(nums)+1):
            j=0
            while j<len(nums) and nums[j]<i:
                j+=1
            if j==len(nums):
                continue
            if (len(nums)-j)==i:
                return i  
        return -1
# print(Solution().specialArray([3,5]))
# print(Solution().specialArray([0,0]))
print(Solution().specialArray([0,4,3,0,4]))