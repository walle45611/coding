#include <bits/stdc++.h>

int main(){
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int h1, m1, h2, m2;
	while (cin >> h1 >> m1 >> h2 >> m2) {
		if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0)
			break;

		int time1 = h1 * 60 + m1;
		int time2 = h2 * 60 + m2;

		if (time2 < time1) {
			time2 += 24 * 60;
		}

		cout << time2 - time1 << "\n";
	}


	return 0;
}
