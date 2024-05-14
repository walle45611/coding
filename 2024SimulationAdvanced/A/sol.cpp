#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int n,k;
	
	while(cin >> k >> n){
		int total =0;
		for(int i=k;i<=n;i++){
			int num = i;
			while(num > 0){
				if(num %10 == 2){
					total += i;
					break;
				}
				num /= 10;
			}
		}	
		cout << total << "\n";
	}

	return 0;
}
