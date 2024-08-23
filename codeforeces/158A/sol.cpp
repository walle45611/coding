#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, count = 0;
  cin >> n >> k;
  k--;  
  vector<int> a(n);

  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }

  int threshold = a[k];

  for(int i = 0; i < n; ++i){
    if(a[i] > 0 && a[i] >= threshold) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}

