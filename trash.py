# import numpy as np  
# import matplotlib.pyplot as plt  
# import math

# def graph(formula,price, x_range):  
#     x = np.array(x_range)  
#     y = formula(x,price)

#     n = np.array([f"{price-(math.floor(x[i])*70+math.floor(y[i])*50)}" for i in range(len(x))])
    
#     file = open("output.txt","w")
#     for i in range(len(x)):
#         file.write(f"{math.floor(x[i])} Breakfast(Rs50) , {math.floor(y[i])} Meals(Rs70) : remaing cash = {n[i]}\n")

# def my_formula(x,price):
#     return (price-x*70)/50

# # price = int(input())
# price = 5000

# graph(my_formula, price,range(0,price//70+1))

# x = [4,7,8,9,0,2]
# x.sort()
# print(x)
# n = len(x)
# k=5
# ans=0
# for i in range(n):
#     for j in range(i+1,n):
#         print(f"{x[i]} {x[j]} = {(x[i]&x[j])^(x[i]|x[j])}")
#         if((x[i]&x[j])^(x[i]|x[j])>k):
#             ans+=n-j
#             print(x[j:])
#             break
# print(ans)