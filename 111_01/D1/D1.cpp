#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  string a, b;
  vector<string> results; 

  while (true) {
    if (!getline(cin, a)) break;
    if (!getline(cin, b)) break;

    map<char,int> ma, mb;
    string output;
    for (int i = 0; i < a.size(); ++i) {
      ma[a[i]]++;
    }
    for (int i = 0; i < b.size(); ++i) {
      mb[b[i]]++;
    }

    for (auto &p : ma) {
      char c = p.first;
      if (mb.count(c) > 0) {
        int minCount = min(ma[c], mb[c]);
        for (int i = 0; i < minCount; ++i) {
          output += c;
        }
      }
    }
    results.push_back(output);  
  }

  
  for (int i = 0; i < results.size(); ++i) {
    cout << results[i];
    if(i < results.size() -1) cout << "\n";
  }

  return 0;
}

