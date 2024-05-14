#include <bits/stdc++.h>

using namespace std;

int main(){
  int t; 
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    if (n == 1) {
      a[0] = k;
    }
    else {
      int msb = 0;
      for (int i = 0; i < 31; i++) {
        if (k & (1 << i)) {
          msb = i;
        }
      }
      a[0] = (1 << msb) - 1;
      a[1] = k - a[0];
      for (int i = 2; i < n; i++) {
        a[i] = 0;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
