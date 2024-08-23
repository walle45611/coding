#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t;
  string codeforces = "codeforces";
  cin >> t;
  while(t--){
    char c;
    cin >> c;

    if (codeforces.find(c) != string::npos){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }

  return 0;
}

