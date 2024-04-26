#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void addEdge(vector<int> adj[],int s,int d){
        adj[s].push_back(d);
}

void dfs(vector<int> adj[],int s,vector<bool> &visited, int &subtreeCount){
        visited[s] = true;
        for(int u: adj[s]) {
                if(!visited[u])
                        dfs(adj,u,visited, subtreeCount);
        }
}

int main(){
        int n,m;
        cin>>n>>m;

        vector<int> adj[n];

        for(int i=0;i<m;++i){
                int s,d;
                cin >> s >> d;
                addEdge(adj,s,d);
        }

        vector<bool> visited(n,false);
        int subtreeCount = 0;

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                dfs(adj, i, visited, subtreeCount);
                subtreeCount++;
            }
        }

        cout << subtreeCount << endl;

        return 0;
}

