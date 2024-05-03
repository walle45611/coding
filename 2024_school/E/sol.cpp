#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	map<int, int> frequency;

	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		frequency[num]++;
	}

	int maxFrequency = -1;

	for (const auto& pair : frequency) {
		maxFrequency = std::max(maxFrequency, pair.second);
	}

	bool first = true;
	for (const auto& pair : frequency) {
		if (pair.second == maxFrequency) {
			if (!first)
				cout << " ";
			cout << pair.first;
			first = false;
		}
	}

	return 0;
}

