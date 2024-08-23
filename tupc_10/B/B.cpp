#include <bits/stdc++.h>

using namespace std;

int main() {
  int M;

  while (cin >> M) {
    vector<vector<int>> remainderLists(M);

    int num;
    char ch;
    while (cin >> num) {
      remainderLists[num % M].push_back(num);
      ch = cin.get();
      if (ch == '\n' || ch == EOF) break;
    }

    for (int i = 0; i < M; ++i) {
      if (!remainderLists[i].empty()) {
        sort(remainderLists[i].begin(), remainderLists[i].end());
        for (const int &val : remainderLists[i]) {
          cout << val << " ";
        }
      }
    }
    cout << endl;
  }

  return 0;
}

