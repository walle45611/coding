#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    int n,r;
    cin >> n >> r;
    vector<char> num;
    if (n == 0) num.push_back('0');
    while(n > 0){
      if(n % r >= 10){
        num.insert(num.begin(),(n%r-10)+65);
      }
      else{
        num.insert(num.begin(),(n % r)+48);
      }
      n /= r;
    }
    for(char i : num)
      cout << i;
    cout << "\n";
  }

  return 0;
}
