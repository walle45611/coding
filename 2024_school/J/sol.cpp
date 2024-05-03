#include <bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int n;
	while(cin >> n){
		int sum = 1;
		for(int i = 2; i <= n; ++i)
			sum = sum + i -1 ;
		cout << sum << "\n";
	}

	return 0;
}

