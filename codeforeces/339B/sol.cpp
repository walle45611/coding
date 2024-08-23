#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,m;
  cin >> n >> m;

  vector<int> a(m);

  for(int i=0;i<m;i++){
    cin >> a[i];
  }

  int count=0;
  int index=1;
  for(int i=0;i<m;++i){
    if (a[i] >= index){
      count += a[i] - index;
    }
    else{
      count += n - (index-a[i]);
    }
    index = a[i];
  }

  cout << count << endl;
  return 0;
}

