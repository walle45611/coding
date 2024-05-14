#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	map<char, int> count;

	cin >> n;
	cin.ignore();

	while (n--) {
		string s;
		getline(cin, s);
		for (char c : s) {
			if (isalpha(c)) {
				count[toupper(c)]++;
			}
		}
	}

	vector<pair<int, char>> sorted_count;
	for (auto it : count) {
		sorted_count.push_back({it.second, it.first});
	}

	sort(sorted_count.rbegin(), sorted_count.rend());

	for (auto p : sorted_count) {
		cout << p.second << " " << p.first << endl;
	}

	return 0;
}

