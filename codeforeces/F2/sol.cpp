#include<bits/stdc++.h>

using namespace std;

vector<vector<long long>> graph;
vector<long long> node;

vector<long long> diff_elem(vector<long long>& v1, vector<long long>& v2) {
	vector<long long> diff;

	for (auto it = v2.rbegin(); it != v2.rend(); ++it) {
		if (find(v1.begin(), v1.end(), *it) == v1.end()) {
			diff.push_back(*it);
		}
	}

	for (auto it = v1.rbegin(); it != v1.rend(); ++it) {
		if (find(v2.begin(), v2.end(), *it) == v2.end()) {
			diff.push_back(*it);
		}
	}

	return diff;
}

bool dfs(long long u,long long v,vector<bool>& visited,vector<long long>& path){
	if(u==v){
		path.push_back(u);
		return true;
	}

	visited[u] = true;
	path.push_back(u);
	for(long long i=0;i<graph[u].size(); ++i){
		long long next = graph[u][i];
		if(!visited[next] && dfs(next,v,visited,path))
			return true;
	}

	path.pop_back();
	return false;
}

void print_ans(long long min,const vector<long long> &diff){
	if (diff.size() > min){
		cout << min << " ";
		for(long long i=0;i<min;++i){
			cout << diff[i];
			if (i != min -1) cout << " ";
		}
	}
	else{
		cout << diff.size() << " ";
		for(long long i=0;i<diff.size();++i){
			cout << diff[i] ;
			if (i != diff.size()-1) cout << " ";
		}
	}
}

int main(){
	long long n;
	cin >> n;
	graph.resize(n+1);
	node.resize(n);

	for(long long i=0;i<n;++i)
		cin >> node[i];

	long long u,v;
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
		long long a1,b1,a2,b2,min;
		if (!(ss>>a1>>b1>>a2>>b2>>min)) break;

		vector<long long> path1, path2;
		vector<bool> visited(n+1, false);
		dfs(a1, b1, visited, path1);
		visited.assign(n+1, false);
		dfs(a2 , b2, visited, path2);

		for(long long i=0;i<path1.size();++i)
			path1[i] = node[path1[i]-1];
		for(long long i=0;i<path2.size();++i)
			path2[i] = node[path2[i]-1];

		print_ans(min,diff_elem(path1,path2));

		cout << "\n";
	}

	return 0;
}
