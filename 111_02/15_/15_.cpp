#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string n;
  bool first = true;  
  while(cin >> n){
    int x=0,y=0;
    for(char i:n){
      switch(i){
        case 'U':
          y++;
          break;
        case 'D':
          y--;
          break;
        case 'L':
          x--;
          break;
        case 'R':
          x++;
          break;
      }
    }

    if (!first) {
      cout << "\n";
    }
    first = false; 

    if (x == 0 && y == 0)
      cout << "Y";
    else
      cout << "N";
  }

  return 0;
}

