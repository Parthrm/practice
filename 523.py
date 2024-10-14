class Solution:
    def checkSubarraySum(self, nums: list[int], k: int) -> bool:
        remainder_map = {0: -1}  
        cumulative_sum = 0
        
        for i, num in enumerate(nums):
            cumulative_sum += num
            remainder = cumulative_sum % k
            if remainder in remainder_map:
                if i - remainder_map[remainder] > 1:
                    return True
            else:
                remainder_map[remainder] = i
        return False
print(Solution().checkSubarraySum([23,2,6,4,7],11))