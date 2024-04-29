#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false),cin.tie(nullptr);
	int N,Q;
	vector<int> x;
	cin >> N >> Q;
	for(int i=0;i<N;++i)
		cin >> x[i];
	for(int i=0;i<Q;i++){
		vector<int> S;
		if (S.find(x[i]) != S.end()){
			S.erase(x[i]);
		}
		else{
			S.push_back(x[i]);
		}

	}



	return 0;
}
