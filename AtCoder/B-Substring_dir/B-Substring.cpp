#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false),cin.tie(nullptr);

	string S;
	cin >> S;
	
	set<string> substrings;

	for(int i=0;i< S.size() ;++i){
		string temp ="";
		for(int j=0;i+j < S.size();++j){
			temp += S[i+j];
			substrings.insert(temp);
		}
	}

	cout << substrings.size();
	return 0;
}
