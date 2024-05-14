#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<int> &adj, vector<bool> &visited, int u, int &max_outdegree, int &sender) {
  visited[u] = true;
  int outdegree = 0;
  for (int v = 1; v < adj.size(); ++v) {
    if (adj[u] == v && !visited[v]) {
      dfs(adj, visited, v, max_outdegree, sender);
    }
    if (visited[v]) {
      outdegree++;
    }
  }
  if (outdegree > max_outdegree) {
    max_outdegree = outdegree;
    sender = u;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  for (int t = 1; t <= T; ++t) {
    int N;
    cin >> N;

    vector<int> adj(N + 1);
    for (int i = 0; i < N; ++i) {
      int u, v;
      cin >> u >> v;
      adj[u] = v;
    }

    int max_outdegree = 0;
    int sender = -1;
    vector<bool> visited(N + 1, false);

    for (int i = 1; i <= N; ++i) {
      if (!visited[i]) {
        dfs(adj, visited, i, max_outdegree, sender);
      }
    }

    cout << "Case " << t << ": " << sender << "\n";
  }

  return 0;
}

