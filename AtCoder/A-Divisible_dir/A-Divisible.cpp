#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false),cin.tie(nullptr);
	int N,K;
	cin >> N >> K ;
	bool is_first = true;
	while(N--){
		int x;
		cin >> x;
		if(x % K == 0){
			if (!is_first){
				cout << ' ';
			}
			else{
				is_first = false;
			}
			cout << x/K;
		}
	}

	return 0;
}
