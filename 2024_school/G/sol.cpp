#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	while(n--) {
		int s, count = 0;
		cin >> s;
		vector<int> a(s);
		for(int i = 0; i < s; ++i)
			cin >> a[i];

		for(int i = 0; i < s; ++i) {
			for(int j = 0; j < s - i - 1; ++j) {
				if (a[j] > a[j + 1]) {
					count++;
					swap(a[j], a[j + 1]);
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps." << "\n";
	}

	return 0;
}

