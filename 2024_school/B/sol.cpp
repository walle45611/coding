#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int total = 0;
	while(n--){
		string s;
		cin >> s;
		switch(s[0]){
			case 'T':
				total += 4;
				break;
			case 'C':
				total += 6;
				break;
			case 'I':
				total += 20;
				break;
			case 'D':
				if(s[1] == 'o')
					total += 12;
				else
					total += 8;
				break;
			case 'O':
				total += 8;
				break;
		}
	}
	cout << total;

	return 0;
}

