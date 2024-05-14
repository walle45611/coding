#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  long long t;
  cin >> t;
  bool first = true; 
  while (t--) {
    long long x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    vector<long long> sides = {x1, x2, x3, x4};
    sort(sides.begin(), sides.end());

    if (sides[0] == sides[1] && sides[1] == sides[2] && sides[2] == sides[3]){
      cout << "square";
    }
    else if((sides[0] + sides[2]) == (sides[1] + sides[3])) {
      cout << "rectangle";
    }
    else if((sides[0] + sides[1] + sides[2]) >= sides[3]) {
      cout << "quadrangle";
    }
    else if((sides[0] + sides[1] + sides[2]) < sides[3]) {
      cout << "banana";
    }    


    if(t != 0) cout << "\n";
  }

  return 0;
}

