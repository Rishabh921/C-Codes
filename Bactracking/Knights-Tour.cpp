#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
#define n 8

bool valid(int nx, int ny,int mat[n][n])
{
    return (nx>=0 and nx<n and ny>=0 and ny<n and mat[nx][ny]==-1);
}

bool go(int mat[n][n],int x,int y,int dx[n],int dy[n],int mv)
{
    if(mv==n*n)
    {
        return 1;
    }
    
    for(int k=0;k<8;k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if(valid(nx,ny,mat))
        {
            mat[nx][ny]=mv;
            if(go(mat,nx,ny,dx,dy,mv+1)==1)
            {
                return true;
            }
            mat[nx][ny] = -1;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int mat[n][n],mv=1;
	memset(mat,-1,sizeof(mat));
	mat[0][0]=0;
	int dx[8]={2,1,-1,-2,-2,-1,1,2};
	int dy[8]={1,2,2,1,-1,-2,-2,-1};
	if(go(mat,0,0,dx,dy,mv))
	{
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<mat[i][j]<<"\t";
	        }
	        cout<<endl;
	    }
	}
	
	
	return 0;
}
