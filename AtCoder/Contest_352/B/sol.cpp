#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string S, T;
	while (cin >> S >> T) {
		set<int> result;
		int s_pos = 0, t_pos = 0;
		while (s_pos < S.size() && t_pos < T.size()) {
			if (S[s_pos] == T[t_pos]) {
				result.insert(t_pos + 1);
				s_pos++;
			}
			t_pos++;
		}
		for (auto pos : result) {
			cout << pos << " ";
		}
		cout << "\n";
	}

	return 0;
}

