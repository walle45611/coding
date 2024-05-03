#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int total = 0;
	cin >> n;

	total += (n / 12) * 50;

	n %= 12;

	if(n > 0) {
		total += (n * 5);
	}

	cout << total << "\n";
	return 0;
}

