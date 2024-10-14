class Solution:
    def increasingTriplet(self, nums: list[int]) -> bool:
        a = 10e10
        b = 10e10
        for i in nums:
            if(i<=a):
                a=i
            elif(i<=b):
                b=i
            else:
                return True
        return False
        
print(Solution().increasingTriplet([2,1,5,0,4,6]))