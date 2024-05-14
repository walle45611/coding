#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>>& maze, int n, int m) {
  vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
  queue<pair<int, int>> q;
  q.push({0, 0});
  dist[0][0] = maze[0][0];
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};

  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    for (int i = 0; i < 4; ++i) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
        if (dist[nx][ny] > dist[x][y] + maze[nx][ny]) {
          dist[nx][ny] = dist[x][y] + maze[nx][ny];
          q.push({nx, ny});
        }
      }
    }
  }
  return dist[n-1][m-1];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> maze(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j)
        cin >> maze[i][j];
    cout << bfs(maze, n, m);
    if(t!=0) cout << "\n";
  }
  return 0;
}

