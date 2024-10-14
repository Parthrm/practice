class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowels = 'aeiou'
        curr_count = sum([s[0:k].count(i) for i in vowels])
        ans=curr_count
        def check(c:str):
            if c in vowels:
                return 1
            return 0

        for i in range(k,len(s)):
            curr_count+=check(s[i])-check(s[i-k])
            ans=max(curr_count,ans)
            if(ans==k):
                return k
        return ans
print(Solution().maxVowels("aeiou",2))