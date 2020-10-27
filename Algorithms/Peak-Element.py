t=int(input())
while t:
    n = int(input())
    arr = list(map(int,input().split()))
    if n==1:
        print(0)
        continue
    l,r = 0,n-1
    while l<=r:
        mid = int( l + (r-l)/2 )
        if mid>0 and mid<n-1:
            
            if arr[mid] >= arr[mid+1] and arr[mid] >= arr[mid-1]:
                print(mid)
                break
            elif arr[mid+1] > arr[mid]:
                l = mid+1 
            elif arr[mid-1] > arr[mid]:
                r = mid-1
            
        elif mid==0:
            print(0 if arr[0]>arr[1] else 1)
            break
        
        elif mid==n-1:
            print((n-1) if arr[n-1]>arr[n-2] else (n-2))
            break
    t-=1
