#include<bits/stdc++.h>
using namespace std;

void bfsTraversal(int nodes, int edges, vector<int> adjList[], vector<int> &bfs)
{
	int visited[nodes+1] = {0}; // since it is 1 based index
	queue<int> q;
	q.push(1); // since it is 1 based index
	visited[1] = 1;
	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		bfs.push_back(node);
		for(auto it : adjList[node])
		{
			if(!visited[it])
			{
				q.push(it);
				visited[it] = 1;
			}
		}
	}
}


int main()
{
	// Uncomment these line if you want take input from one file and show output in another file
  
	// #ifndef ONLINE_JUDGE
	// // for getting input from input.txt
	// freopen("input.txt","r",stdin);
	// // for writing output to output.txt
	// freopen("output.txt","w",stdout);
	// #endif

	int nodes,edges;
	cin >> nodes >> edges;
	vector<int> adjList[nodes+1];
	for(int i=0;i<edges;i++)
	{
		int u,v;
		cin >> u >> v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	vector<int> bfs;

	bfsTraversal(nodes,edges,adjList,bfs);

	cout << "BFS Traversal is ";
	for(int i=0;i<bfs.size();i++)
	{
		cout << bfs[i] << " ";
	}
	cout << endl;

	return 0;
}