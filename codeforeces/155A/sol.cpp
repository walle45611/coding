#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> s(n,0);
  for(int i=0;i<n;++i){
    cin >> s[i];
  }

  int count=0;
  for(int i=1;i<n;++i){
    int j = i -1;
    if(s[i] > s[j])
      count++;
  }

  cout << count << endl;
  return 0;
}

