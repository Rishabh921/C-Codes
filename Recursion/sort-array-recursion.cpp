#include <bits/stdc++.h>
using namespace std;

int minIndex(int arr[],int i,int j)
{
    if(i==j)
       return i;
    else{
        int k = minIndex(arr,i+1,j);
        return (arr[i]<arr[k])?i:k;
    }
}

void sortArray(int arr[], int n,int i=0)
{
    if(i==n)
      return;
    else
    {
        int k = minIndex(arr,i,n-1);
        if(k!=i) swap(arr[k], arr[i]);
        sortArray(arr,n,i+1);
    }
}

int main() {
	int arr[]={3, 1, 5, 2, 7, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	sortArray(arr,n);
	for(int x : arr){
	    cout<<x<<" ";
	}
	return 0;
}
