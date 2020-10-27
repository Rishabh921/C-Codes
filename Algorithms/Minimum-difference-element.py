t=int(input())
while t:
    size,key = map(int,input().split())
    arr = list(map(int,input().split()))
    l,r = 0,size-1
    flag=0
    while(l<=r):
        mid =int( l + (r-l)/2 )
        if arr[mid]==key:
            flag+=1
            break
        elif arr[mid]<key:
            l=mid+1 
        elif arr[mid]>key:
            r=mid-1
    
    if flag==1:
        print(mid)
    else:
        a = abs(key-arr[l])
        b = abs(key-arr[r])
        ans = r if a>b else l
        print(ans)
    t-=1
