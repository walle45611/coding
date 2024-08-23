#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int s,n;
  cin >> s >> n;

  vector<pair<int,int>> dragons(n);

  for(int i=0;i<n;++i){
    cin >> dragons[i].first >> dragons[i].second;
  }

  sort(dragons.begin(),dragons.end());

  bool canWin = true;
  for(int i=0;i<n;++i){
    if(s > dragons[i].first){
      s+= dragons[i].second;
    }
    else{
      canWin = false;
    }
  }

  cout << (canWin ? "YES" : "NO") << endl; 

  return 0;
}

