#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> source(n,0);
	for(int i=0;i<source.size();++i){
		cin >> source[i];
	}

	int max = 101;
	int min = -1;
	for(int i=0;i<source.size();++i){
		if(source[i] > 60 && source[i] - 60 < max - 60)
			max = source[i];
		if(source[i] < 60 && min < source[i])
			min = source[i];
	}

	for(int i=0;i<source.size();++i){
		cout << source[i];
		if(i != source.size()-1) cout << " ";
	}

	cout << endl;
	cout << (min == -1 ? "best case" : to_string(min)) << endl;
	cout << (max == 101 ? "worst case" : to_string(max)) << endl;

	return	0;
}
