#include <bits/stdc++.h>
using namespace std;

bool bfs(int n,vector<vector<int>>& path){
  vector<int> dist(n,-1);
  queue<int> q;

  for(int i=0;i<n;++i){
    if(dist[i] == -1){
      q.push(i);
      dist[i] =0;
      while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int n:path[curr]){
          if(dist[n] == -1){
            dist[n] = dist[curr] + 1;
            q.push(n);
          }
          else if (dist[n] % 2 == dist[curr] %2){
            return true;
          }
        }
      }
    }
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<vector<int>> path(n);
  for(int i=0;i<=n-1;++i){
    int u,v;
    cin >> u >> v;
    u--; v--;
    path[u].push_back(v);
    path[v].push_back(u);
  }

  cout << (bfs(n,path) ? "YES" : "NO") << endl;
  return 0;
}

