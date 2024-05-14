#include <bits/stdc++.h>

using namespace std;

int center(const string& s, int left, int right) {
  while (left >= 0 && right < s.length() && s[left] == s[right]) {
    left--;
    right++;
  }
  return right - left - 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  bool first = true;
  while (cin >> s) {
    if (s.empty()) {
      cout << "0\n";
      continue;
    }

    int maxlen = 0;
    for (int i = 0; i < s.length(); i++) {
      int len1 = center(s, i, i);
      int len2 = center(s, i, i + 1);
      maxlen = max(maxlen, max(len1, len2));
    }

    if (!first) {
      cout << "\n";
    }
    cout << maxlen;
    first = false;
  }

  return 0;
}

