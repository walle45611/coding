#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &graph, vector<bool> &visited, int u){
	visited[u] = true;
	for(int v : graph[u]){
		if(!visited[v])
			dfs(graph, visited, v);
	}
}

int main(){
	ios_base::sync_with_stdio(false),cin.tie(nullptr);

	int T;
	cin >> T;

	while(T--){
		int N;
		cin >> N;

		vector<vector<int>> graph(N + 1);

		for(int i = 0; i < N; ++i){
			int u, v;
			cin >> u >> v;
			graph[u].push_back(v);
		}

		int max_outdegree = 0;
		int sender = -1;

		for(int i = 1; i <= N; ++i){
			vector<bool> visited(N + 1,false);
			dfs(graph, visited, i);
			int outdegree = 0;
			for(bool v : visited){
				if(v)
					outdegree++;
			}
			if(outdegree > max_outdegree){
				max_outdegree = outdegree;
				sender = i;
			}
		}

		cout  << sender << "\n";
	}

	return 0;
}

