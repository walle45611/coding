#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n,m;
  cin >> n >> m;

  vector<int> a(n);
  for(auto i =0; i < n;++i){
    cin >> a[i];
  }
  
  bool first = true;
  
  while(m--){
    int q,left=0,right=n-1;
    int ans = -1;
    cin >> q;

    while(left <= right){
      int mid = left + (right - left) / 2 ;
      if (a[mid] >= q){
        if(a[mid] == q){
          ans = mid + 1;    
        }
        right = mid - 1;       
      }
      else {
        left = mid + 1;
      }
    }
    if(!first) cout << " ";
    cout << ans;
    first = false;
  }
  cout << "\n";
}

