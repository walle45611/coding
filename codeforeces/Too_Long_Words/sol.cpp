#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;

	while(n--){
		string w;
		cin >> w;
		if (w.size() > 10){
			cout << w[0] << w.size()-2 << w[w.size()-1];
		}
		else{
			cout << w;
		}
		cout << "\n";
	}

	return 0;
}
