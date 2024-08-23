#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  long long n,m,a,count1=0,count2=0;
  cin >> n >> m >> a;
  while(1){
    n -= a;
    count1++;
    if (n <= 0)
      break;
  }
  while(1){
    m -= a;
    count2++;
    if(m <= 0)
      break;
  }
  cout << count1 *  count2 << endl;
  return 0;
}
