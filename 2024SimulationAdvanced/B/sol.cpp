#include <bits/stdc++.h>

int main(){
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	int n,count=1,total=0;
	while(cin>>n){
		if(count % 2== 0){
			total +=n;
		}
		else{
			total -=n;
		}
		count++;
	}
	cout << total << "\n";

	return 0;
}
