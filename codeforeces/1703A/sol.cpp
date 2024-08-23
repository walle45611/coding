#include <bits/stdc++.h>

using namespace std;

string toUpper(const string &str){
  string result = str;
  for(char &c : result){
    c = toupper(c);
  }
  return result;
}

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    if(toUpper(s) == "YES"){
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
