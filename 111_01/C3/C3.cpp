#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int x, y;
  bool isFirstOutput = true;

  while (cin >> x >> y) {
    if (x == 0 && y == 0) break;

    int count = 0;
    int carry = 0;

    while (x > 0 || y > 0) {
      int sum = (x % 10) + (y % 10) + carry;
      if (sum >= 10) {
        carry = 1;
        count++;
      } else {
        carry = 0;
      }
      x /= 10;
      y /= 10;
    }

    if (!isFirstOutput) {
      cout << "\n";
    }
    isFirstOutput = false;

    if (count == 0) {
      cout << "No carry operation.";
    } else if (count == 1) {
      cout << "1 carry operation.";
    } else {
      cout << count << " carry operations.";
    }
  }

  return 0;
}

