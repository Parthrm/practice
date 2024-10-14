class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        n=len(nums)
        copy = [0]*n
        count=0
        for i in nums:
            if(i!=0):
                copy[count]=i
                count+=1
        for i,num in enumerate(copy):
            nums[i]=num
a = [1,0,2,0,4,3]
Solution().moveZeroes(a)
print(a)