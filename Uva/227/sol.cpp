#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k = 1;
  while (true) {
    vector<string> mp(5);
    int x = -1, y = -1;

    for (int i = 0; i < 5; i++) {
      getline(cin, mp[i]);
      if (mp[i].length() == 4)
        mp[i] += ' ';
      if (mp[0][0] == 'Z')
        return 0;
    }

    for (int i = 0; i < 5; i++)
      for (int j = 0; j < 5; j++)
        if (mp[i][j] == ' ') {
          x = i;
          y = j;
        }

    string s = "", s1;
    while (true) {
      getline(cin, s1);
      s += s1;
      if (s1.back() == '0')
        break;
    }

    bool flag = true;
    for (int i = 0; i < s.length() - 1; i++) {
      switch (s[i]) {
        case 'A':
          if (x == 0) {
            flag = false;
            break;
          }
          swap(mp[x][y], mp[x - 1][y]);
          x--;
          break;
        case 'B':
          if (x == 4) {
            flag = false;
            break;
          }
          swap(mp[x][y], mp[x + 1][y]);
          x++;
          break;
        case 'L':
          if (y == 0) {
            flag = false;
            break;
          }
          swap(mp[x][y], mp[x][y - 1]);
          y--;
          break;
        case 'R':
          if (y == 4) {
            flag = false;
            break;
          }
          swap(mp[x][y], mp[x][y + 1]);
          y++;
          break;
      }
      if (!flag) break;
    }

    if (k > 1)
      cout << endl;

    cout << "Puzzle #" << k++ << ":" << endl;

    if (!flag) {
      cout << "This puzzle has no final configuration." << endl;
      continue;
    }

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        cout << mp[i][j];
        if (j != 4) cout << " ";
      }
      cout << endl;
    }
  }

  return 0;
}

