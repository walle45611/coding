#include <bits/stdc++.h>

int main() {
  using namespace std;
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    string b;
    cin >> b;
    
    string result = "";
    result += b[0];
    for(int i=1;i<b.length();i+=2){
      result += b[i];
    }
    cout << result << endl;
  }
  

  return 0;
}

