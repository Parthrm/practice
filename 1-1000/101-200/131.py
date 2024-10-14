class Solution(object):
    def partition(self, s:str):
        """
        :type s: str
        :rtype: List[List[str]]
        """
        # return [s[j:j+i] for i in range(1,len(s)+1) for j in range(len(s)-i+1) if s[j:j+i]==s[j:j+i][::-1]]
        # return [x for x in [[s[j:j+i] for j in range(len(s)-i+1) if s[j:j+i]==s[j:j+i][::-1]]for i in range(1,len(s)+1)] if len(x)>0]
        part = [0 for _ in range(len(s))]
        ans = []
        while (part[-1]==0):
            partition_strings = []
            partition_strings.append(s[0])
            for i in range(len(s)-1):
                if(part[i]==0):
                    partition_strings[-1]+=s[i+1]
                else:
                    partition_strings.append(s[i+1])
            flag = True
            for x in partition_strings:
                if(x!=x[::-1]):
                    flag=False
                    break
            if (flag):
                ans.append(partition_strings)
            i = 0
            while (part[i]!=0):
                part[i]=0
                i+=1
            part[i]=1
        return ans

print(Solution().partition("aab"))