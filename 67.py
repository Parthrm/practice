class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        ans = ""
        if(len(b)>len(a)):
            a,b=b,a
        a=a[::-1]
        b=b[::-1]
        b=b+(""+"0"*(len(a)-len(b)))
        carry=0
        for i in range(len(b)):
            t = carry + ord(a[i]) + ord(b[i])-2*ord('0')
            if(t&1):
                ans+='1'
            else:
                ans+='0'
            if(t&2):
                carry=1
            else:
                carry=0
        if(carry==1):
            ans+='1'
        return ans[::-1]

# print(Solution().addBinary("11","1"))
print(Solution().addBinary("1010","1011"))
