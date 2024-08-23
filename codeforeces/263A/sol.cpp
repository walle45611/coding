#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n=0, m=0;
  for(int i=1; i<6; ++i){
    for(int j=1; j<6; ++j){
      int tmp;
      cin >> tmp;
      if(tmp == 1) {
        n = i;
        m = j;
      }
    }
  }

  int moves = abs(n-3) + abs(m-3);

  cout << moves << endl;
  return 0;
}

