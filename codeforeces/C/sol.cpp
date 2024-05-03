#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false),cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<vector<int>> nn(n,vector<int>(n,0));
		vector<pair<int, pair<bool, vector<int>>>> operations;
		int count = 0;
		bool dir = false;
		int max_sum = 0;
		while(count < n*n){
			for(int i=0;i<n;++i){
				if(dir){
					nn[i][count%n] = i+1;
				}
				else{
					nn[count%n][i] = i+1;
				}
			}

			int tmp = 0;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					tmp+=nn[i][j];
				}
			}
			operations.push_back({tmp, {dir, vector<int>(nn[0].begin(), nn[0].begin() + n)}});
			max_sum = max(max_sum, tmp);

			if((count+1) % n == 0){
				dir = !dir;
			}
			count++;
		}

		int step = 2 * n;

		for(int i = 0; i < operations.size(); i++){
			if(max_sum == operations[i].first){
				step = i + 1;
				break;
			}
		}

		cout << max_sum << " " << step << "\n";
		for(int i=0;i<step;i++){
			cout << (operations[i].first ? "1 " : "2 ") <<  i+1 << " ";
			for(auto x : operations[i].second.second){
				cout << x << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}

