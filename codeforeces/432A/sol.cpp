#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,k;
  cin >> n >> k;
  vector<int> team(n,0);

  for(int i=0;i<n;++i){
    cin >> team[i];
  }

  sort(team.begin(),team.end());

  int count = 0;
  for(int i=0;i<n;++i){
    if(5 - team[i] >= k){
      count++;
    }
  }

  int result = count/3;

  cout << result << endl; 

  return 0;
}

