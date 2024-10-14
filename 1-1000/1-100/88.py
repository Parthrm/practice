class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        i,j,k=0,0,0
        temp = nums1[:m]
        while i<m and j<n:
            if(temp[i]<nums2[j]):
                nums1[k]=temp[i]
                i+=1
            else:
                nums1[k]=nums2[j]
                j+=1
            k+=1
        while i<m:
            nums1[k]=temp[i]
            i+=1
            k+=1
        while j<n:
            nums1[k]=nums2[j]
            j+=1
            k+=1

nums1 = [1,2,3,0,0,0]
nums2 = [2,5,6]
m=3
n=3
Solution().merge(nums1,m,nums2,n)
print(nums1)