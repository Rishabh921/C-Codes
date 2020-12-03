void sort-0s-1s-2s(int a[], int n)
{
    long long l,m,h;
    l=0, m=0, h=n-1;
    while(m<=h)
    {
        if(a[m]==0)
        {
            swap(a[m],a[l]);
            m++;
            l++;
        }
        else if(a[m]==1)
        {
            m++;
        }
        else
        {
            swap(a[m],a[h]);
            h--;
        }
    }
}
