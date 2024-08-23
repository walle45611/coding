#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    vector<int> abc(3,0);
    for(int i=0;i<3;++i){
      cin >> abc[i];
    }

    sort(abc.begin(),abc.end());

    cout << abc[1]<< endl;
  }
  return 0;
}

