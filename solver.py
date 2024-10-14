
grid = [
    [0,0,0,0,0],
    [0,0,0,0,0],
    [0,3,2,0,1],
    [1,4,0,3,2],
    [4,0,0,0,0],
]

def find_num_of_colours(grid:list):
    s = set()
    cords = dict()
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if(grid[i][j]!=0):
                s.add(grid[i][j])
                cords[grid[i][j]] = (i,j)
    return len(s),cords

def number_of_like_neighbours(grid:list,i:int,j:int):
    count = 0
    #check up
    if(i!=0 and grid[i-1][j]==grid[i][j]):
        count+=1
    #check down
    if(i!=len(grid)-1 and grid[i+1][j]==grid[i][j]):
        count+=1
    #check right
    if(j!=len(grid[0])-1 and grid[i][j+1]==grid[i][j]):
        count+=1
    #check left
    if(j!=0 and grid[i][j-1]==grid[i][j]):
        count+=1
    return count

def final_stage(grid:list):
    n,_ = find_num_of_colours(grid)
    l = dict()
    for i in range(1,n+1):
        l[i]=[0,0,0,0,0]
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if(grid[i][j]!=0):
                l[grid[i][j]][number_of_like_neighbours(grid,i,j)]+=1
    for t in list(l.values()):
        if(t[0]!=0 or t[1]!=2):
            return False
    return True
            

def solver(grid:list,cords:dict,n:int):
    curr = list(0 for _ in range(n+1))
    count = 0
    while True:
        print(curr[1:])
        count+=1
        curr[-1]+=1
        i = n
        while(curr[i]==4 and i>=0):
            curr[i] = 0
            curr[i-1]+=1
            i-=1
        if(curr[0]==1):
            break

    

n,cords = find_num_of_colours(grid)
solver(grid,cords,n)