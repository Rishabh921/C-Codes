n = int(input())
os,ob = 1,1
ns,nb = 0,0
for i in range(1,n):
    ns = os + ob
    nb = os
    os = ns
    ob = nb
s = ns + nb
sqr = int(s*s)
print(sqr)
