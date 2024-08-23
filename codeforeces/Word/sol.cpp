#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  string x;
  while(cin >> x){
    int big=0,sm=0;
    for(char i : x){
      if(i > 64 && i < 91){
        big++; 
      }
      else if(i > 96 && i < 123){
        sm++;
      }
    }
    if(big > sm){
      for(int i=0;i< x.length() ;++i){
        if(x[i] > 96 && x[i] < 123){
          x[i] -= 97;
          x[i] += 65;
        }

      }
    }
    else if(sm >= big ){
      for (int i=0;i<x.length(); ++i){
        if(x[i] > 64 && x[i] < 91){
          x[i] -= 65;
          x[i] += 97;
        }   
      }
    }
    cout << x << endl;
  }

  return 0;
}
