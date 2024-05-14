#include <bits/stdc++.h>

int main(){
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int n;
	while(cin >> n){
		long long a = 0,b = 1,c;
		for(int i=0;i<n;++i){
			c= a+b;
			a =b;
			b =c;
		}
		cout << a << ":" << b << "\n";
	}

	return 0;
}
