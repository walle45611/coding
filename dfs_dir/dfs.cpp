#include<iostream>
#include<vector>
#include<stack>
#include<iterator>

using namespace std;


#define MAX 100

vector<int> vec[MAX];

void add_edge(vector<int> vec[],int u,int v){
	vec[u].push_back(v);
}

void DFS(vector<int> vec[],int start,int target){
	vector<int>::iterator it;
	stack<int> s;
	int flag = 0;

	s.push(start);

	while(!s.empty()){
		int node = s.top();
		s.pop();

		if (node == target){
			flag = 1;
			cout << target << endl;
		}

		for (it = vec[node].begin(); it< vec[node].end(); ++it){
			s.push(*it);
			cout << "now : " << node<<"\t";
			cout << "push : " << *it << endl;
		}
		if (flag == 0){
			cout << "not found : " << target <<endl;
		}
	}

}

int main(){
	add_edge(vec, 1, 3);
	add_edge(vec, 1, 2);
	add_edge(vec, 2, 5);
	add_edge(vec, 2, 4);
	add_edge(vec, 3, 7);
	add_edge(vec, 3, 6);
	DFS(vec, 1, 6);
	return 0;
}
