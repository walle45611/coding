#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  
  double x;

  cin >> x;

  for(int i=1;i<=x;++i){
    for(int j=i+1;j<=x;++j){
      if((j/i) == x){
        cout << i << "/" << j << endl;
        break;
      }
    }
  }

  return 0;
}
