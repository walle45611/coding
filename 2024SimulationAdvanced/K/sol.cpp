#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n;
  cin >> n;
  while(n--){
    int f;
    cin >> f;
    double total =0;
    for(int i=0;i<f;++i){
      double area, ani ,eco;
      cin >> area >> ani >> eco;
      double average = area/ani;
      double bon = average * eco;
      total += bon*ani;
    }
    cout << fixed << setprecision(0) << round(total) << "\n";
  }
  return 0;
}

