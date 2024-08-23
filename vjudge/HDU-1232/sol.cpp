#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool> &visited){
  visited[node] = true;
  for(int n: graph[node]){
    if(!visited[n]){
      dfs(n,graph,visited);
    }
  }
}

int findMinRoads(int n,vector<pair<int,int>> & roads){
  if(n==0) return 0;

  vector<vector<int>> graph(n+1);
  for(const auto& road : roads){
    int u = road.first;
    int v = road.second;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  vector<bool> visited(n+1,false);
  int connect = 0 ;

  for(int i=1;i<=n;++i){
    if(!visited[i]){
      dfs(i,graph,visited);
      ++connect;
    }
  }

  return connect-1;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while(true){
    int n,m;
    cin >> n >> m;
    if(n== 0) break;
    vector<pair<int,int>> roads(m);

    for(int i=0;i<m;++i){
      int u,v;
      cin >> u >> v;
      roads[i] = {u,v};
    }

    cout << findMinRoads(n,roads) << endl;

  }

  return 0;
}

