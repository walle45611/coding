#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> tmp(n,0);
  vector<int> c;
  vector<int> s;
  vector<int> m;
  for(int i=0;i<n;++i){
    cin >> tmp[i];
  }
  for(int i=0;i<n;++i){
    switch(tmp[i]){
      case 1:
        c.push_back(i+1);
        break;
      case 2:
        m.push_back(i+1);
        break;
      case 3:
        s.push_back(i+1);
        break;
    }
  }
  int max_team = 2;
  cout << max_team << endl;
  for(int i=0;i<max_team;++i){
    cout << c[i] << " " << m[i] << " " << s[i] << endl;
  }
  return 0;
}

