class Solution(object):
    def wordBreak(self, s, wordDict):
        alpha = set([c for word in wordDict for c in word])
        for c in s:
            if c not in alpha:
                return False
        self.ans = False
        def check(s,index,words):
            if index == len(s) or self.ans:
                if words[-1] in wordDict:
                    self.ans = True
                return
            words[-1]+=s[index]
            if words[-1] in wordDict:
                check(s,index+1,words+[""]) 
            check(s,index+1,words) 
            return 
        check(s,0,[""])
        return self.ans
sol = Solution()
# s = "catsanddog"
# wordDict = ["cat","cats","and","sand","dog"]
# s = "catsandog"
# wordDict = ["cats","dog","sand","and","cat"]
# s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"
# wordDict = ["a","aa","aaa","aaaa","aaaaa","aaaaaa","aaaaaaa","aaaaaaaa","aaaaaaaaa","aaaaaaaaaa"]
s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
wordDict = ["aa","aaa","aaaa","aaaaa","aaaaaa","aaaaaaa","aaaaaaaa","aaaaaaaaa","aaaaaaaaaa","ba"]
print(sol.wordBreak(s,wordDict))
