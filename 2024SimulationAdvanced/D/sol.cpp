#include <bits/stdc++.h>

int main(){
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int t,count=1;
	while(cin >> t){
		if (t == 0) break;
		vector<int> a (t,0);
		int aver = 0;
		for(int i=0;i<t;++i){
			cin >> a[i];
			aver += a[i];
		}
		aver /= t;
		int move = 0;
		for(auto i=0;i<a.size();++i){
			if(a[i]> aver){
				move += a[i]-aver;
			}
		}
		cout << "Set #"<< count <<"\n"<<"The minimum number of moves is "<< move << "."<< "\n";
		count++;
	}
	return 0;
}
