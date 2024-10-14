class Solution:
    def canPlaceFlowers(self, flowerbed: list[int], n: int) -> bool:
        lf=len(flowerbed)
        def check(index:int):
            if(flowerbed[index]!=0):
                return False
            ans=True
            if(index!=0 and flowerbed[index-1]!=0):
                ans=False
            if(index!=lf-1 and flowerbed[index+1]!=0):
                ans=False
            return ans
        i=count=0
        while i<lf and count<n:
            if(check(i)):
                flowerbed[i]=1
                count+=1
            i+=1
        return count>=n

print(Solution().canPlaceFlowers([1,0,0,0,1],2))