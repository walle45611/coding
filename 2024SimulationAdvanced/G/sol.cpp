#include<bits/stdc++.h>

using namespace std;

int main(){ 
  string s;
  while(cin >> s){
    sort(s.begin(),s.end());
    map<char,int> a;
    map<char,bool> b;
    for(int i=0;i<s.size();++i){
      a[s[i]]++;
    }
    
    int count = 0;
    for(auto i = a.begin(); i != a.end();++i){
      if(i->second & 1){
        if(count == 0){
          b[i->first] = false;
          count++;
        }
        else{
          a[i->first] = 0;
        }
      }
      else{
        b[i->first] = true;
      }
    }

    for(auto i = a.begin();i!=a.end();++i){
      if(i->second != 0)
        cout << i->first << " " << i->second << "\n";
    }
  }

  return 0;
}
