#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int m;
  cin >> m;

  while(m--){

    long long n,sum=1,index=0;
    cin >> n;

    while(1){
      ++index;
      sum *= index;
      if (sum % n == 0)
        break;
    }
    cout << index << endl;
  }
  return 0;
}
