#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) {
    vector<int> x(n);
    int sum = 0;

    for (int i = 0; i < n; ++i) {
      cin >> x[i];
      sum += x[i];
    }

    vector<bool> dp(sum + 1, false);
    dp[0] = true;

    for (int num : x) {
      for (int i = sum; i >= num; --i) {
        if (dp[i - num]) {
          dp[i] = true;
        }
      }
    }

    vector<int> unique_sums;
    for (int i = 1; i <= sum; ++i) {
      if (dp[i]) {
        unique_sums.push_back(i);
      }
    }

    cout << unique_sums.size() << "\n";
    for (int i = 0; i < unique_sums.size(); ++i) {
      cout << unique_sums[i];
      if (i < unique_sums.size() - 1) {
        cout << " ";
      }
    }
    cout << "\n";
  }

  return 0;
}

