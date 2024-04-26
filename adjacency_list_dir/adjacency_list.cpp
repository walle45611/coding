#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> list[5];

	for(int i=0;i<5;++i){
		list[i].clear();
	}	

	int a,b;

	while(cin >> a >> b)
		list[a].push_back(b);
	
	return 0;
}
