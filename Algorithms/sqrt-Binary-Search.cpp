long long int floorSqrt(long long int n) 
{
    if(n==0 or n==1) return n;
    long long int l=1,r=n,mid,ans;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if(mid*mid == n)
           return mid;
        else if(mid*mid < n)
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            r=mid-1;
        }
    }
    return ans;
}
