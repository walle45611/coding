#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  string m;
  while(cin >> m){
    if(m[0] > 96 && m[0] < 123){
      m[0] -= 'a';
      m[0] += 65;
    }
    cout << m << endl;
  }
  return 0;
}
