#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	long long S, D;

	while(cin >> S >> D){

		long long num = S;

		while(num < D){
			S++;
			num = num + S;
		}

		cout << S << "\n";
	}

	return 0;
}
