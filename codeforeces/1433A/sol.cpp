#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    string x;
    cin >> x;
    int y = x.back() - '0';
    int result = (y-1)*10;

    int tmp = 0;
    for(int i=0;i <= x.size();++i){
      tmp += i;
    }

    cout << result + tmp << endl;
  }
  return 0;
}

