#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int V;
  //dynamic array of linked list
	list<int> *adjList;
public :
  //constructor
	Graph(int v)
	{
		V = v;
    //memory allocation
		adjList = new list<int>[V];
	}

	void addEdge(int u, int v, bool bidir = true)
	{
		adjList[u].push_back(v);
		if (bidir) adjList[v].push_back(u);
	}

	void printList()
	{
		for (int i = 0; i < V; i++)
		{
			cout << i << "->";
			for (int node : adjList[i])
			{
				cout << node << " , ";
			}
			cout << endl;
		}
	}


};

int main()
{
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(0, 3);
	g.addEdge(1, 3);
	g.addEdge(3, 2);

	g.printList();

	return 0;
}
