#include<bits/stdc++.h>
using namespace std;


//we are making array tree with starting index 1
//Time Complexity : O(n)
void buildSegmentTreeArray(int *tree,int *arr,int index,int start,int end)
{
  //first base case
  if(start > end)
  {
    return;
  }

  //another base case - Leaf Node
  else if(start == end)
  {
    tree[index] = arr[start];
    return;
  }

  //Recursive call
  int mid = (start + end)/2;

  //build left subtree
  buildSegmentTreeArray(tree,arr,2*index,start,mid);

  //build right subtree
  buildSegmentTreeArray(tree,arr,2*index + 1,mid+1,end);

  // Small Calculation
  int left = tree[2*index];
  int right = tree[2*index + 1];

  tree[index] = min(left,right);
}


//return minimum element from tree lying in range qs and qe
//Time Complexity : O(log n)
int query(int *tree,int index,int start,int end,int qs,int qe)
{
  //No Overlap
  if(qs > end or qe < start)
  {
    return INT_MAX;
  }

  //Complete Overlap
  else if(qs <= start and qe >= end)
  {
    return tree[index];
  }

  //Partial Overlap

  //call on both sides
  int mid = start + (end-start)/2;
  int leftAns = query(tree,2*index,start,mid,qs,qe);
  int rightAns = query(tree,2*index + 1,mid+1,end,qs,qe);

  return min(leftAns,rightAns);
}

//we want to change only one node of array as arr[i] = value
//Time Complexity : O(log n)
void updateNode(int* tree,int index,int start,int end,int i,int value)
{
  // No Overlap
  if(i<start or i>end)
  {
    return;
  }

  // reached leaf node
  if(start == end)
  {
    tree[index] = value;
    return;
  }

  //i lying in range start to end
  int mid = (start+end)/2;

  //call to left subtree
  updateNode(tree,2*index,start,mid,i,value);

  //call to right subtree
  updateNode(tree,2*index + 1,mid+1,end,i,value);

  //update the current node
  tree[index] = min(tree[2*index],tree[2*index + 1]);
}

/*
Range Update:
Update each node from rs to re by
incrementing each node's value by val
Time Complexity : O(n)
*/
void updateRange(int *tree,int index,int start,int end,int rs,int re,int val)
{
  //No Overlap
  if(re < start or rs > end) return;

  //Reached Leaf Node
  if(start == end) 
  {
    tree[index] += val;
    return;
  }

  //Partial Overlap
  int mid = (start+end)/2;

  //call on left subtree
  updateRange(tree,2*index,start,mid,rs,re,val);

  //call on right subtree
  updateRange(tree,2*index + 1,mid+1,end,rs,re,val);

  //update current index of tree
  tree[index] = min(tree[2*index],tree[2*index + 1]);
  return;
}

int main()
{

  int *arr = new int[6];
  arr[0] = 1; arr[1] = 3; arr[2] = 2; arr[3] = -2; arr[4] = 4; arr[5] = 5;
  // int *arr = {1,3,2,-2,4,5};
  int n = 6; 

  /* Building Segment Tree Array*/
  int *tree = new int[4*n + 1];
  
  buildSegmentTreeArray(tree,arr,1,0,n-1);

  for(int i=1;i<(4*n + 1);i++) cout<<tree[i]<<" ";
  cout<<"\n";

  int q;
  cin>>q;
  while(q--)
  {
    int qs,qe;
    cin>>qs>>qe;

    int ans = query(tree,1,0,n-1,qs,qe);
    cout<<"Min No. in given range is = "<<ans<<"\n";
  }

  return 0;
}
