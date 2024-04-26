#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main (){
	int num;
	cin >> num;
	vector<vector<int>> attribute;
	vector<int> win(num,0);
	
	attribute.resize(num,vector<int>(2,0));

	for(int i=0;i<num;++i){
		for(int j=0;j<2;++j){
			cin>>attribute[i][j];
		}
	}

	int user=0;
	while(user < num){
		for(int i=0;i<num;++i){
			if(attribute[i][0] < attribute[user][0] && attribute[i][1] < attribute[user][1])
				win[user]++;
		}
		user++;
	}

	auto max_win = max_element(win.begin(),win.end());
	cout<<*max_win;

	return 0;
}
