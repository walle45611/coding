#include<bits/stdc++.h>
#include<sstream>
#include<iostream>

using namespace std;

bool dfs(vector<int> &aTree,vector<bool> &visited,vector<int> &path,int v, int target) {
   	visited[v] = true; 
    	path.push_back(v); 

    	if (v == target) 
        	return true;
	for(int i=0;i<aTree.size();++i){
		if(aTree[i] ==v &&!visited[i]){
			if(dfs(aTree,visited,path,i,target)){
				return true;
			}
		}
	}
	
	path.pop_back();
	return false;
}

int perTree(vector<int> &aTree,int target){
	int n=aTree.size(),root;
	auto it = find(aTree.begin(),aTree.end(),999);
	if (it != aTree.end())
		root = distance(aTree.begin(),it);

	vector<bool> visited(n,false);
	vector<int> path;

    	if (dfs(aTree, visited, path, root, target)) {
        	return path.size()-2;
    	} 
    	else {
		cout << "error";
        	return -1;
	}	
	return 1;
}

int main(){
	int n;
	cin >> n;
	for(int run=0;run<n;run++)
	{
		string mkv_input;
		
		cin >> mkv_input;

		stringstream ss(mkv_input);

		vector<int> mkv;

		while(ss.good()){
			string substr;
			getline(ss,substr,',');
			int number = stoi(substr);
			mkv.push_back(number);
		}

		vector<vector<int>> tree;

		tree.resize(mkv[0],vector<int>(mkv[1]+1,0));

		for(int i=0;i<mkv[0];++i){
			for(int j=0;j<mkv[1]+1;++j){
				cin >> tree[i][j-1];
			}
		}
		
		
		for(int i=0;i<mkv[1];++i){
			vector<int> aTree;
			for(int j=0;j<mkv[0];++j){
				aTree.push_back(tree[j][i]);
			}
			cout << perTree(aTree,mkv[2]);
			if (i!=mkv[1]-1)
				cout << ",";
		}
	}
	return 0;
}
