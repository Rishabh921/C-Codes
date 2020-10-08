# Codechef October Long Challenge 2020 REPLESX (Replace for X solution in python 3.9.0)

from bisect import *                           # use this module to find lower and uppper bound
t=int(input())

while t:
    n,x,p,k = map(int,input().split(" "))      # take space separated inputs
    v = list(map(int,input().split(" ")))      # take space separated inputs in form of a list
    v.sort()
    if v[p-1] == x:
        print(0)
    elif k<=p and v[p-1]<=x:
        i = bisect_left(v,x) - p + 1            # similar to lower_bound() in C++
        print(i)
    elif k>=p and v[p-1]>=x:
        i = p - bisect_right(v,x)               # similar to upper_bound() in C++
        print(i)
    else:
        print(-1)
        
    t-=1
