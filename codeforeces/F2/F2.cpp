#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<int> node;

vector<int> diff_elem (vector<int>& vec1, vector<int>& vec2) {
    vector<int> diff;
    for (int i:vec2){
	if(find(vec1.begin(),vec1.end(),i) == vec1.end()){
		diff.push_back(i);
	}
    }

    for (int i:vec1){
	if(find(vec2.begin(),vec2.end(),i) == vec2.end()){
		diff.push_back(i);
	}
    }
    return diff;
}


bool dfs(int u,int v,vector<bool>& visited,vector<int>& path){
	if(u==v){
		path.push_back(u);
		return true;
	}

	visited[u] = true;
	path.push_back(u);
	for(int i=0;i<graph[u].size(); ++i){
		int next = graph[u][i];
		if(!visited[next] && dfs(next,v,visited,path))
			return true;
	}

	path.pop_back();
	return false;
}

void print_ans(int min,const vector<int> &diff){
	if(diff.size() > min){
		cout << min << " ";
		for(int i=diff.size()-1;i>=min;--i)
			cout << diff[i] <<" ";
	}
	else{
		cout << diff.size() << " ";
		for(int i=0;i<diff.size();++i)
			cout << diff[i] << " ";
	}
}

int main(){
	int n;
	cin >> n;
	graph.resize(n+1);
	node.resize(n);

	for(int i=0;i<n;++i)
		cin >> node[i];

	int u,v;
	string line;
	cin.ignore();
	while(getline(cin,line)){
		stringstream ss(line);
		if(!(ss >> u >> v))break;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	while(getline(cin,line)){
		stringstream ss(line);
		int a1,b1,a2,b2,min;
		if (!(ss>>a1>>b1>>a2>>b2>>min)) break;

		vector<int> path1, path2;
		vector<bool> visited(n+1, false);
		dfs(a1, b1, visited, path1);
		visited.assign(n+1, false);
		dfs(a2 , b2, visited, path2);

		for(int i=0;i<path1.size();++i){
			path1[i] = node[path1[i]-1];
		}
		for(int i=0;i<path2.size();++i){
			path2[i] = node[path2[i]-1];
		}

		reverse(path1.begin(),path1.end());
		reverse(path2.begin(),path2.end());

		print_ans(min,diff_elem(path1,path2));

		cout << "\n";
	}

	return 0;
}
