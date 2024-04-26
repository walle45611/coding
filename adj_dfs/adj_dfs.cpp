#include<iostream>
#include<vector>

using namespace std;


class Graph {
private:
	vector<vector<int>> adj;
	vector<bool> vis;
public:
	Graph(int n){
		adj.resize(n);
		vis.assign(n,false);
	}

	void addEdge(int u,int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	void DFS(int v){
		vis[v] = true;
		cout << v << " ";

		for(int i=0;i<adj[v].size();++i){
			int nei =adj[v][i];
			if (!vis[nei])
				DFS(nei);
		}

	}
};

int main (){
	vector<vector<int>> edges = {{1, 2}, {0, 3, 4}, {0, 4}, {1}, {1, 2}};
	int numNodes = edges.size();
	
	Graph graph(numNodes);
    	for (int i = 0; i < edges.size(); ++i) {
        	for (int j = 0; j < edges[i].size(); ++j) {
        	    	graph.addEdge(i, edges[i][j]);
        	}
    	}

    	cout << "DFS traversal from node 0: ";
    	graph.DFS(0);
    	cout << endl;

	return 0;
}
