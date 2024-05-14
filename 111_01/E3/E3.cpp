#include<bits/stdc++.h>

using namespace std;

pair<int, int> position_to_index(const string& pos) {
  int column = pos[0] - 'a';
  int row = 8 - (pos[1] - '0');
  return make_pair(row, column);
}

bool is_inside_board(int r, int c) {
  return r >= 0 && r < 8 && c >= 0 && c < 8;
}

int bfs_knight(pair<int, int> start, pair<int, int> end) {
  vector<pair<int, int>> moves = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
  vector<vector<int>> distances(8, vector<int>(8, INT_MAX));
  queue<pair<int, int>> queue;

  queue.push(start);
  distances[start.first][start.second] = 0;

  while (!queue.empty()) {
    auto [r, c] = queue.front();
    queue.pop();

    if (r == end.first && c == end.second) {
      return distances[r][c];
    }

    for (auto [move_r, move_c] : moves) {
      int new_r = r + move_r;
      int new_c = c + move_c;
      if (is_inside_board(new_r, new_c) && distances[new_r][new_c] == INT_MAX) {
        queue.push({new_r, new_c});
        distances[new_r][new_c] = distances[r][c] + 1;
      }
    }
  }

  return distances[end.first][end.second];
}

int main() {
  string start, end;
  bool first = true;
  while (cin >> start >> end) {
    pair<int, int> start_idx = position_to_index(start);
    pair<int, int> end_idx = position_to_index(end);
    int moves = bfs_knight(start_idx, end_idx);
    if(!first) cout << "\n";
    first = false;
    cout << "To get from " << start << " to " << end << " takes " << moves << " knight moves.";
  }
  return 0;
}

