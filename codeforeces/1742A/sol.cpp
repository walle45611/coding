#include <bits/stdc++.h>

using namespace std;

bool check(int a,int b,int c){
  if ((a+b) == c)
    return true;
  else
    return false;
}


int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    int ans=0;
    bool tmp;
    vector<int> abc(3,0);
    cin >> abc[0] >> abc[1] >> abc[2];
    for(int i=0;i<3;++i){
      switch (i){
        case 0:
          tmp = check(abc[1] , abc[2],abc[0]);
          break;
        case 1:
          tmp = check(abc[0],abc[2],abc[1]);
          break;
        case 2: 
          tmp = check(abc[1],abc[0],abc[2]);
          break;
      }
      if (tmp){
        ans++;
      }
    }
    if(ans > 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
