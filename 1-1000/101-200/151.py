class Solution:
    def reverseWords(self, s: str) -> str:
        return " ".join([x for x in s.split(" ")[::-1] if len(x)>0])

s = "a good   example"
print(Solution().reverseWords(s))