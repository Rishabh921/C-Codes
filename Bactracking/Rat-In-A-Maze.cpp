#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
bool vis[100][100];

bool go(std::vector<std::vector<int>> &v,int sx,int sy,int dx,int dy,int r,int c,std::vector<string> &m)
{
    if(sx<0 or sy<0 or sx>=r or sy>=c or v[sx][sy]==0 or vis[sx][sy]==true)
      return false;
    if(sx == dx and sy == dy)
      return true;
    vis[sx][sy]=true;
    
    //backtracking 
     
    //right movement
    if(go(v,sx,sy+1,dx,dy,r,c,m))
       {m.push_back("Right");return true;}
    //left movement
    if(go(v,sx,sy-1,dx,dy,r,c,m))
       {m.push_back("Left");return true;}
    //up movement
    if(go(v,sx-1,sy,dx,dy,r,c,m))
       {m.push_back("Up");return true;}
    //down movement
    if(go(v,sx+1,sy,dx,dy,r,c,m))
       {m.push_back("Down");return true;}
    return false;
    
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r,c;
	cin>>r>>c;
	std::vector<std::vector<int>> maze(r,std::vector<int>(c));
	for(int i=0;i<r;i++)
	{
	    for(int j=0;j<r;j++)
	    {
	        cin>>maze[i][j];
	    }
	}
	memset(vis,false,sizeof(vis));
	std::vector<string> movement;
	if(go(maze,0,0,r-1,c-1,r,c,movement))
	{
	    cout<<"Maze solution:"<<endl;
	    for(int i=movement.size();i>0;i--)
	    {
	        cout<<movement[i-1]<<" ";
	    }
	}
	else
	   cout<<"No solution exist.";
	
	return 0;
}
