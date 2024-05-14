#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    int x;
    cin >> x;
    map<int,int> m;
    
    for(int i=1;i<10;++i){
      m[i] = 0;
    }
    
    for(int i=1; i < x+1;++i){
      int j = i;
      while(j>0){
        m[j%10]++;
        j /= 10;
      }
    }
  
    for(int i = 0;i<10;++i){
      cout << m[i];
      if (i != 9) cout << " ";
    }
    if (t != 0 ) cout << "\n";
  }

  return 0;
}
