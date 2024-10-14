class Solution:
    def subarraysDivByK(self, nums: list[int], k: int) -> int:
        prefix_map = {0 : 1}
        s, ans = 0, 0
        for i in range(len(nums)):
            s = (s + nums[i]) % k
            if s < 0:
                s += k
            if s in prefix_map:
                ans += prefix_map[s]
                prefix_map[s] += 1
            else:
                prefix_map[s] = 1
        return ans
print(Solution().subarraysDivByK([4,5,0,-2,-3,1],5))
# [4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]