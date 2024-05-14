#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  string s;
  bool first = true;
  while(cin >> s){
    unordered_map<char, int> charIndex;
    int maxlen = 0;
    int start = 0;
    for(int end = 0; end < s.length(); end++){
      char curr = s[end];
      if(charIndex.find(curr) != charIndex.end() && charIndex[curr] >= start){
        start = charIndex[curr] + 1;
      }
      charIndex[curr] = end;

      maxlen = max(maxlen, end - start + 1);
    }

    if(!first) cout << "\n";
    first = false;
    cout << maxlen;
  }

  return 0;
}

