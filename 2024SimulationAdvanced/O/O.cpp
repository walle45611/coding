#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  while(cin >> N){
    vector<int> graph[N];
    int a, b;
    while (cin >> a >> b) {
      if (a >= 0 && a < N && b >= 0 && b < N) {
        graph[a].push_back(b);
        graph[b].push_back(a);
      }
    }

    queue<int> q;
    vector<bool> visited(N, false);
    q.push(0);
    visited[0] = true;

    bool first = true;
    while (!q.empty()) {
      int node = q.front();
      q.pop();
      if(!first) cout << "\n";
      first = false;
      cout << node ;

      sort(graph[node].begin(), graph[node].end()); 
      for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
          visited[neighbor] = true;
          q.push(neighbor);
        }
      }
    }

  }
  return 0;
}

