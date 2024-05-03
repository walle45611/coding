#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int w,n;
	while(cin >> w >> n){
		int total = 0;
		for(int i = 0; i < n; ++i){
			int x,y;
			cin >> x >> y;
			total += x*y;
		}
		cout <<  total / w << "\n";
	}
	return 0;
}

