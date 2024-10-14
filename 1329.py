class Solution:
    def diagonalSort(self, mat: list[list[int]]) -> list[list[int]]:
        rows = len(mat)
        cols = len(mat[0])
        def sort_(i:int,j:int):
            temp = []
            for a,b in zip(range(i,rows),range(j,cols)):
                temp.append(mat[a][b])
            temp.sort()
            count=0
            for a,b in zip(range(i,rows),range(j,cols)):
                mat[a][b]=temp[count]
                count+=1
        for i in range(rows,0,-1):
            sort_(i-1,0)
        for i in range(1,cols):
            sort_(0,i)
        return mat
x = Solution().diagonalSort([[3,3,1,1],[2,2,1,2],[1,1,1,2]])
for i in x:
    print(i)
        
