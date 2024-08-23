#include <bits/stdc++.h>

using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    set<int> a;

    for(int i=0;i<n;++i){
      int tmp;
      cin >> tmp;
      a.insert(tmp);
    }

    bool check = true;
    for(auto i = next(a.begin()); i != a.end(); ++i) {
      auto j = prev(i);
      if((*i - *j) > 1) {
        check = false;
        break;
      }
    }
    cout << (check ? "YES" : "NO") << endl;
  }

  return 0;
}

