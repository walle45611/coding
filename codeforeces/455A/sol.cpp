#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n,0);
  for(int i=0;i<n;++i)
    cin >> a[i];

  if (n < 3)
    cout << n << endl;
  else 
    cout << n+1 << endl;
  
  
  return 0;
}

