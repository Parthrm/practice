class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if(s==""):
            return True
        if(len(s)>len(t)):
            return False
        return s in t
        # count=0
        # for c in t:
        #     if(s[count]==c):
        #         count+=1
        #     if(count==len(s)):
        #         break
        # return count==len(s)
print(Solution().isSubsequence("parth","parth"))