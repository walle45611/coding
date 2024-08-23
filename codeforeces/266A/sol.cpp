#include <bits/stdc++.h>

using namespace std;
int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  string s;
  int n,count=0;
  cin >> n >> s;
  for(int i=1;i<n;++i){
    if(s[i] == s[i-1]){
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
