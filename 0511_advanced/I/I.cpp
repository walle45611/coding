#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a1,b1,c1,a2,b2,c2,n;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
  
  int max_pro = INT_MIN;

  for(int x1=0;x1<=n;x1++){
    int x2 = n - x1;
    int y1 = a1 * x1 * x1 + b1 * x1 + c1;
    int y2 = a2 * x2 * x2 + b2 * x2 + c2;
    int total = y1 + y2;

    max_pro = max(max_pro,total);
  }

  cout << max_pro;

  return 0;
}
