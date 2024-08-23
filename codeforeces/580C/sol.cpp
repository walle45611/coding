#include <bits/stdc++.h>

using namespace std;

int max_count = 0;

void dfs(int node,const vector<vector<int>> &path, vector<bool> &visited,vector<int> &a,int count,int m){
  visited[node] = true;

  if(a[node]) count++;
  else count = 0;

  if (count > m){
    visited[node] = false;
    return;
  }

  bool is_leaf = true;
  for(int n : path[node]){
    if(!visited[n]){
      is_leaf = false;
      dfs(n,path,visited,a,count,m);
    }
  }

  if(is_leaf){
    max_count++;
  }

  visited[node]=false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> a(n+1);

  for(int i=1;i<=n;++i){
    cin >> a[i];
  }

  vector<vector<int>> path(n+1);
  for(int i=0;i<n-1;++i){
    int x,y;
    cin >> x >> y;
    path[x].push_back(y);
    path[y].push_back(x);
  }

  vector<bool> visited(n+1,false);
  dfs(1,path,visited,a,0,m);

  cout << max_count << endl;

  return 0;
}
