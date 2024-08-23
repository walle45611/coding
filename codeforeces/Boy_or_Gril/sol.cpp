#include <bits/stdc++.h>

using namespace std;

int main(){
  string x;
  while(cin >> x){
    set<char> ans_set;
    for(char a : x){
      ans_set.insert(a);
    }
    if(ans_set.size() %2 == 0){
      cout << "CHAT WITH HER!" << endl;
    }
    else{
      cout << "IGNORE HIM!" << endl;
    }
  }
}
