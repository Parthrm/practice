class Solution(object):
    def check(self,nums:list,k:int)->bool:
        if(len(nums)==0):
            return False
        if(len(nums)==1):
            return True
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if(abs(nums[i]-nums[j])==k):
                    return False
        return True
        
    def beautifulSubsets(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        def backtrack(start, path):
            subsets.append(path)
            for i in range(start, len(nums)):
                backtrack(i + 1, path + [nums[i]])
            
        subsets = []
        backtrack(0, [])
        print(subsets)
        subsets = [x for x in subsets if self.check(x,k)]
        print(subsets)
        return len(subsets)

# print(Solution().beautifulSubsets([2,4,6],2))
print(Solution().beautifulSubsets([10,4,5,7,2,1],3))

