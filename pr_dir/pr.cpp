#include<bits/stdc++.h>

using namespace std;

void p(int n, vector<int> &ans, vector<bool> &used) {
	if (n == ans.size()) {
		for (int i = 0; i < n; ++i) {
			cout << ans[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = 1; i <= n; ++i) {
		if (!used[i]) {
			ans.push_back(i);
			used[i] = true;
			p(n, ans, used);
			used[i] = false;
			ans.pop_back();
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> ans;
	vector<bool> used(n + 1, false);

	p(n, ans, used);

	return 0;
}

