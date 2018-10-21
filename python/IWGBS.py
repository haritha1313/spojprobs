# cook your dish here
import sys
n = int(input())
x,y=0,1
for i in range(n):
    z=y
    y=x+y
    x=z
print (x+y)
