class Solution:
    def longestOnes(self, nums: list[int], k: int) -> int:
        connected = []
        count=0
        for i in range(len(nums)):
            if i==0:
                connected.append(1)
            else:
                if(nums[i]!=nums[i-1]):
                    connected.append(1)
                else: 
                    connected[-1]+=1
        last=0
        c = []
        for i in range(0 if nums[0]==0 else 1,len(connected),2):
            if(connected[i]>k or i in [len(connected)-1,len(connected)-2]):
                c.append(connected[last:i+1])
                last=i
        print(c)
        if(nums[0]!=0):
            c[0] = [0]+c[0]
        if(nums[-1]!=0):
            c[-1]= c[-1]+[0]
        print(c)
Solution().longestOnes([1,1,1,0,0,0,1,1,1,1,0],2)