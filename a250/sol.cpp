#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> nums;
	int x;
	while(cin >> x){
		nums.push_back(x);
		if(cin.get == "\n") break;
	}
	for(int i=0,int j, sum =0;i<n;++i){
		while(sum -nums[j] == target){
			sum -= nums[j++]
		}
		cout << sum << "\n";
	}

	return 0;
}
