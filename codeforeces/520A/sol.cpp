#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  bool result = true;
  int n;
  cin >> n;
  vector <char> a(n,0);
  vector <int> b(26,0);

  for(int i=0;i<n;++i){
    cin >> a[i];
  }

  for(int i=0;i<n;++i){
    b[tolower(a[i]) - 97]++;
  }

  for(int i: b){
    if(!i){
      result = false;
      break;
    }
  }

  if (result)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';

  return 0;
}

