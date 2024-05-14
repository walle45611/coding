#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
int depth[1001], parent[1001];

void dfs(int node, int par) {
  parent[node] = par;
  depth[node] = depth[par] + 1;
  for (int child : adj[node]) {
    if (child != par) {
      dfs(child, node);
    }
  }
}

bool checkPath(int u, const vector<int>& nodes) {
  unordered_set<int> pathNodes, nodeSet(nodes.begin(), nodes.end());
  while (u != 0) {
    pathNodes.insert(u);
    u = parent[u];
  }
  pathNodes.insert(1); 

  for (int node : nodes) {
    if (pathNodes.count(node)) continue;
    bool isAdjacent = false;
    for (int adjNode : adj[node]) {
      if (pathNodes.count(adjNode)) {
        isAdjacent = true;
        break;
      }
    }
    if (!isAdjacent) return false;
  }
  return true;
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  dfs(1, 0); 

  bool first = true;
  while (m--) {
    int k;
    cin >> k;
    vector<int> query(k);
    for (int& v : query) cin >> v;

    int deepest = query[0];
    for (int i = 1; i < k; ++i)
      if (depth[query[i]] > depth[deepest]) deepest = query[i];
    
    if(!first) cout << "\n";
    first = false;
    cout << (checkPath(deepest, query) ? "YES" : "NO");
  }

  return 0;
}

