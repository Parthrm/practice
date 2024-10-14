class Solution:
    def compress(self, chars: list[str]) -> int:
        last_char=''
        count=0
        ans=""
        for c in chars:
            if(c==last_char):
                count+=1
            else:
                if(count<2):
                    ans+=last_char
                else:
                    ans+=f"{last_char}{count}"
                last_char=c
                count=1
        x =count if count>=2 else "" 
        ans+=f"{last_char}{x}"
        for i in range(len(ans)):
            chars[i]=ans[i]
        while True:
            try:
                chars.pop(len(ans))
            except:
                break

        return len(ans)

x = ["a","a","a","b","b","a","a"]
print(Solution().compress(x))
print(x)