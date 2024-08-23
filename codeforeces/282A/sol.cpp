#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int x=0,n;
  cin >> n;
  for(int i=0;i<n;++i){
    string s;
    cin >> s;

    if(s == "++X")
      ++x;
    else if(s == "X++")
      x++;
    else if(s == "--X")
      --x;
    else if(s == "X--")
      x--;
  }
  cout << x << endl;
  return 0;
}
