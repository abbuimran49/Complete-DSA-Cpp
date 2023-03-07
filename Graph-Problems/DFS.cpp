#include<bits/stdc++.h>
using namespace std;

void dfsTraversal(int nodes, int edges, vector<int> adjList[], vector<int> &dfs, int node,int visit[])
{
	visit[node] = 1; // 1 indexed graph
	dfs.push_back(node);
	for(auto it : adjList[node])
	{
		if(!visit[it])
		{
			dfsTraversal(nodes,edges,adjList,dfs,it,visit);
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

	vector<int> dfs;
	int start = 1; // since it is 1 based index
	int visit[nodes+1] = {0};

	dfsTraversal(nodes,edges,adjList,dfs,start,visit);

	cout << "DFS Traversal is ";
	for(int i=0;i<dfs.size();i++)
	{
		cout << dfs[i] << " ";
	}
	cout << endl;

	return 0;
}