#include <bits/stdc++.h>
using namespace std;

struct Node {
	string node;
	long long value;

	bool operator<(const Node& n) const{
		return value > n.value; 
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	priority_queue<Node> pq;
	map<char, long long> node_map;
	for (int i = 0; i < n; ++i) {
		long long value;
		cin >> value;
		char node_name = 'a' + i; 
		pq.push({string(1, node_name), value});
		node_map[node_name] = 0;
	}

	while (pq.size() > 1) {
		Node freq1 = pq.top();
		pq.pop();
		Node freq2 = pq.top();
		pq.pop();
		long long node_freq = freq1.value + freq2.value;
		string node_name = freq1.node + freq2.node;
		for(char c : node_name)
			node_map[c]++;
		pq.push({node_name, node_freq});
	}

	long long total_bits = 0;
	for (const auto& entry : node_map) {
		total_bits += entry.second;
	}

	cout << total_bits << "\n";

	return 0;
}

