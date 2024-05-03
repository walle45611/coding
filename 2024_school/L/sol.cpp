#include <bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	string n;
	while(cin >> n){
		if (n == "0") break;
		int total = 0;
		if (n.size() == 1) total = n[0] - '0';
		while(n.size() > 1){
			total = 0;
			for(char i:n)
				total += i - '0'; 
			n = to_string(total);
		}
		cout << total << "\n";
	}

	return 0;
}

