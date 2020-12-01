vector<int> subarraySum(int arr[], int n, int s){
    
    vector<int> idx(1,-1);
    int first=0,second=0,sum=0;
    for(int i=0;i<n;i++)
    {
        second = i;
        sum+=arr[second];
        //cout<<"sum = "<<sum<<endl;
        if(sum > s)
        {
            while(sum>s)
            {
                sum-=arr[first];
                first++;
            }
        }
        if(sum == s)
        {
            idx[0] = first+1;
            idx.push_back(second+1);
            return idx;
        }
    }
    return idx;
}
