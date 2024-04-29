#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false),cin.tie(nullptr);
	int N,A,B;	
	bool ans = true;
	cin >> N >> A >> B;
	while(--N){
		int x;
		cin >> x;
		if(x%(A+B) > A) {
			ans = false;
			break;
		}
	}

	cout << (ans ? "Yes" : "No") ;
	return 0;
}
