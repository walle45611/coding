#include <bits/stdc++.h>

int main(){
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;

	while(t--){
		int n,a,b;
		cin >> n >> a >> b;
		
		int total = min(n / 2 * b + (n % 2) * a, n * a);
		cout << total << "\n";
	}
	return 0;
}
