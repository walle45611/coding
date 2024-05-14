#include <bits/stdc++.h>
using namespace std;

struct Node {
  string node;
  long long value;

  bool operator<(const Node& n) const {
    return value > n.value;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  cin.ignore();

  while (n--) {
    string line;
    getline(cin, line); 

    stringstream ss(line);
    string value;

    priority_queue<Node> pq;
    map<char, long long> node_map;

    int i = 0;
    while (getline(ss, value, ',')) {
      long long val = stoll(value);
      char node_name = 'a' + i;
      pq.push({string(1, node_name), val});
      node_map[node_name] = 0;
      i++;
    }

    while (pq.size() > 1) {
      Node freq1 = pq.top(); pq.pop();
      Node freq2 = pq.top(); pq.pop();
      long long node_freq = freq1.value + freq2.value;
      string node_name = freq1.node + freq2.node;
      for (char c : node_name)
        node_map[c]++;
      pq.push({node_name, node_freq});
    }

    bool first = true;
    for (const auto& entry : node_map) {
      if (!first) {
        cout << ",";
      }
      cout << entry.second;
      first = false;
    }
    if(n != 0) cout << "\n";
  }
  return 0;
}

