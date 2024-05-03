#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int c=0;
	while(n--){
		int count =0;
		vector<int> team(3,0);
		cin >> team[0] >> team[1] >> team[2];
		for(int i=0;i<3;++i){
			if(team[i] == 1) count++; 	
		}
		if(count >= 2) c++;
	}
	cout << c;


	return 0;
}
