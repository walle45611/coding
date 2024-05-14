#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string num;
  cin >> num;

  for (int i = num.size() - 1; i >= 0; --i) {
    if ((num[i] - '0') % 2 != 0) {
      cout << num.substr(0, i + 1) << '\n';
      return 0;
    }
  }

  cout << 0 << '\n';
  return 0;
}

