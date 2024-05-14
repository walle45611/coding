#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x, y, z;
	while (cin >> n >> x >> y >> z) {
		if ((x < y && x < z && z < y) || (x > y && x > z && z > y)) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}

	return 0;
}

