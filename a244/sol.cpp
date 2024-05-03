#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	while(n--){
		int a,b,c;
		cin >> a >> b >>c;
		switch(a){
			case 1:
				cout << b+c;
				break;
			case 2:
				cout << b-c;
				break;
			case 3:
				cout << b*c;
				break;
			case 4:
				cout << b/c;
				break;
		}
		cout << "\n";
	}

	return 0;
}
