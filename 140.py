class Solution(object):
    def wordBreak(self, s, wordDict):
        ans = []
        def check(s,index,words):
            if index == len(s):
                if words[-1] in wordDict:
                    ans.append(" ".join(words))
                return
            words[-1]+=s[index]
            if words[-1] in wordDict:
                check(s,index+1,words+[""]) 
            check(s,index+1,words) 
            return 
        check(s,0,[""])
        return ans
sol = Solution()
# s = "catsanddog"
# wordDict = ["cat","cats","and","sand","dog"]
s = "pineapplepenapple"
wordDict = ["apple","pen","applepen","pine","pineapple"]
print(sol.wordBreak(s,wordDict))