class Solution:
    def heightChecker(self, heights: list[int]) -> int:
        return sum([x!=y for x,y in zip(heights,sorted(heights))])
print(Solution().heightChecker([1,1,4,2,1,3]))