#include <bits/stdc++.h>
#define maxn 1000+10

using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  int kase=0;
  vector<int> key(maxn);
  vector<int> guess(maxn);
  while(cin >> n && n != 0){
    cout << "Game " << ++kase << ":"<< "\n";
    for(int i=0;i<n;i++) 
      cin >> key[i];

    while(true){
      int A =0,B=0;
      for(int i=0;i<n;i++){
        cin >> guess[i];
      }

      if(guess[0] == 0) break;
      vector<bool> used_key(n,false), used_guess(n,false);
      for(int i=0;i<n;i++){
        if(key[i] == guess[i]){
          A++;
          used_key[i] = true;
          used_guess[i] = true;
        }
      }

      for(int i=0;i<n;i++){
        if(!used_guess[i]){
          for(int j=0;j<n;j++){
            if(!used_key[j] && guess[i] == key[j]){
              B++;
              used_key[j] = true;
              break;
            }
          }
        }
      } 
      cout << "    " << "(" << A << "," << B << ")" << "\n";
    }
  }
  return 0;
}

