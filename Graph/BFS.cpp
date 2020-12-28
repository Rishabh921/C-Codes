void bfs(int src, int dest = -1)
	{
		queue<int> q;
		vector<bool> visited(V + 1, false);
		vector<int> distance(V + 1, 0);
		vector<int> parent(V + 1, -1);

		q.push(src);
		visited[src] = true;

		cout << "BFS traversal is :\n";
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			cout << node << " ";

			for (int neighbors : adjList[node])
			{
				if (!visited[neighbors])
				{
					q.push(neighbors);
					visited[neighbors] = true;
					distance[neighbors] = distance[node] + 1;
					parent[neighbors] = node;
				}
			}
		}

		cout << endl;

		loop(i, 0, V)
		{
			cout << i << " node having parent " << parent[i] << " is at a distance " << distance[i] << " from " << src << endl;
		}

		if (dest != -1)
		{
			cout << "Shortest distance from src = " << distance[dest] << endl;
			cout << "Shortest Path is :\n";
			int temp = dest;
			while (temp != -1)
			{
				cout << temp << " <- ";
				temp = parent[temp];
			}
			cout << endl;
		}
	}
