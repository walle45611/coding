#include <iostream>
using namespace std;

int main() {
  int t, n, m, k;
  cin >> t;
  bool first = true;
  while(t--) {
    cin >> n >> m >> k;
    if(!first) cout << "\n";
    first = false;
    if (m == 1 || k >= n) {
      cout << "NO";
    } else if (m > k) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  }
  return 0;
}

