#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> s(n,0);
	for(int i=0;i<n;++i){
		cin >> s[i];
	}
	
	cout << *max_element(s.begin(),s.end());
	return 0;
}
