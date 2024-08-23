#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;

  while(cin >> s){
    string result;

    for(int i = 0; i < s.length(); i++){
      s[i] = tolower(s[i]);
      if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i'){
        result += '.';
        result += s[i];
      }
    }

    cout << result << endl;
  }

  return 0;
}

