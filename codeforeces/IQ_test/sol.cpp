#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> l;
  for(int i=0;i<n;++i){
    int tmp;
    cin >> tmp;
    l.push_back(tmp);
  }
  
  bool tmp = 0;
  tmp = l[0] % 2;

  for(int i=0;i<n;++i){
    if((l[i] % 2) != tmp){
      cout << i+1 << endl;
    }
  }
  
  return 0;
}
