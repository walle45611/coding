#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    cin.ignore();

    vector<vector<int>> m(n, vector<int>(n));
    for(int i=0;i<n;++i){
      string tmp;
      getline(cin,tmp);
      for(int j=0;j<n;j++){
        m[i][j]=(tmp[j] - '0');
      }
    }

    for(int i = 0; i < n; i += k){
      for(int j = 0; j < n; j += k){
        cout << m[i][j];
      }
      cout << "\n";
    }
  }

  return 0;
}

