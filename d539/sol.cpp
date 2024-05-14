#include <bits/stdc++.h>

using namespace std;

void build_tree(vector<int> &t, vector<int> &tree, int node, int start, int end) {
  if (start == end) {
    tree[node] = t[start];
  } else {
    int mid = (start + end) >> 1;
    int left_node = 2 * node + 1;
    int right_node = 2 * node + 2;
    build_tree(t, tree, left_node, start, mid);
    build_tree(t, tree, right_node, mid + 1, end);
    tree[node] = max(tree[left_node], tree[right_node]);
  }
}

int query(vector<int> &tree, int node, int start, int end, int query_left, int query_right) {
  if (start > query_right || end < query_left) {
    return INT_MIN;
  }
  if (start >= query_left && end <= query_right) {
    return tree[node];
  }
  int mid = (start + end) >> 1;
  int left_max = query(tree, 2 * node + 1, start, mid, query_left, query_right);
  int right_max = query(tree, 2 * node + 2, mid + 1, end, query_left, query_right);
  return max(left_max, right_max);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> t(n, 0);
  for (int i = 0; i < n; ++i) {
    cin >> t[i];
  }

  vector<int> tree(4 * n);
  build_tree(t, tree, 0, 0, n - 1);

  int m;
  cin >> m;
  while (m--) {
    int a, b;
    cin >> a >> b;
    --a; --b; 
    if (a > b) swap(a, b); 
    cout << query(tree, 0, 0, n - 1, a, b) << endl;
  }

  return 0;
}

