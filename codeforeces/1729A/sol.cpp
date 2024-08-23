#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  const vector<int> data = {-1, -3, -5, 8, 15, -1};
  const auto is_positive = [](const auto &x) { return x > 0; };
  const auto first_pos_it = find_if(
      data.cbegin(),
      data.cend(),
      is_positive
      );

  if (first_pos_it != data.cend()) {
    cout << "First positive number: " << *first_pos_it << '\n';
  } else {
    cout << "No positive number found.\n";
  }

  return 0;
}

