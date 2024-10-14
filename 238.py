class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        prod = 1
        found_zero=0
        for i in nums:
            if(i==0):
                found_zero+=1
                if(found_zero>1):
                    return [0 for _ in nums]
            else:
                prod*=i
        ans=[]
        for i in nums:
            if(found_zero==1):
                ans.append(0 if i!=0 else prod)
            else:
                ans.append(prod//i)
        return ans
print(Solution().productExceptSelf([1,2,3,4]))
print(Solution().productExceptSelf([-1,1,0,-3,3,0]))