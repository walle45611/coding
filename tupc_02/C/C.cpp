#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  long long m;

  cin >> m;

  while(m--){
    long long b,e,sum=0;
    cin >> b >> e;
    for(long long i=b;i<=e;++i){
      string c = bitset<32>(i).to_string();
      for (char j : c){
        if(j == '1'){
          sum++;
        }
      }
    }
    cout << sum << endl; 
  }

  return 0;
}
