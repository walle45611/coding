#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  long long t;
  cin >> t;

  while(t--){
    long long n;
    bool check=false;
    cin >> n;

    for(long long i=3;i<n-1;++i){
      if(!(n%i) && (i%2==1)){
        check = true;
        break;
      }
    }

    cout << (check ? "YES" : "NO") << endl;
  }
  return 0;
}

