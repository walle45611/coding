#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int t;
    cin >> t;
    cin.ignore();
    map<string,int> c;
    while(t--){
      string s;
      getline(cin,s);
      string tmp;
      for(int i=0;i<s.size();i++){
        if (s[i] == ' '){
          c[tmp]++;
          break;
        }
        else{
          tmp += s[i];
        }
      }
    } 
    for(auto i=c.begin();i!=c.end();++i){
      cout << i->first << " " << i->second << "\n";
    }
	return 0;
}
