class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        ans=""
        anss = [ans]
        i=0
        l1 = len(str1)
        l2 = len(str2)
        while i<l1 and i<l2:
            if(str1[i]!=str2[i]):
                break
            ans+=str1[i]            
            la = len(ans)
            if(l1%la==0 and l2%la==0 and str1==(ans*int(l1/la)) and str2==(ans*int(l2/la))):
                anss.append(ans)
            i+=1
        
        return anss[-1]

# print(Solution().gcdOfStrings("ABABABAB","ABAB"))
print(Solution().gcdOfStrings("AAAAAAAAA","AAACCC"))