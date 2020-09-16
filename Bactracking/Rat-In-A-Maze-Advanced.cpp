#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
#define max 5

//to know if a move is valid or not
bool isSafe(std::vector<std::vector<int>> &m,int r, int c, int n, bool visited[][max])
{
    if(r==-1 or c==-1 or r==n or c==n or m[r][c]==0 or visited[r][c]==true)
       return false;
    return true;
}

//to print all possible paths
void PrintPathUtil(std::vector<std::vector<int>> &m,int r, int c, int n, bool visited[][max], string &path, std::vector<string> &possiblePaths)
{
    if(r==-1 or c==-1 or r==n or c==n or m[r][c]==0 or visited[r][c]==true)
       return ;
    if(r==n-1 and c==n-1)
    {
        possiblePaths.push_back(path);
        return;
    }
    
    visited[r][c]=true;
    
    //down 
    if(isSafe(m,r+1,c,n,visited))
    {
        path.push_back('D');
        PrintPathUtil(m,r+1,c,n,visited,path,possiblePaths);
        path.pop_back();
    }
    
    //Up
    if(isSafe(m,r-1,c,n,visited))
    {
        path.push_back('U');
        PrintPathUtil(m,r-1,c,n,visited,path,possiblePaths);
        path.pop_back();
    }
    
    //right
    if(isSafe(m,r,c+1,n,visited))
    {
        path.push_back('R');
        PrintPathUtil(m,r,c+1,n,visited,path,possiblePaths);
        path.pop_back();
    }
    
    //left
    if(isSafe(m,r,c-1,n,visited))
    {
        path.push_back('L');
        PrintPathUtil(m,r,c-1,n,visited,path,possiblePaths);
        path.pop_back();
    }
    
    visited[r][c]=false;
    
}

void printPath(std::vector<std::vector<int>> &m,int n)
{
    std::vector<string> possiblePaths;
    string path;
    bool visited[n][max];
    memset(visited,false,sizeof(visited));
    PrintPathUtil(m,0,0,n,visited,path,possiblePaths);
    for(int i=0;i<possiblePaths.size();i++)
    {
        cout<<possiblePaths[i]<<" ";
    }
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
	printPath(maze,maze.size());
	return 0;
}
