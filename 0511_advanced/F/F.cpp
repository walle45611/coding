#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  map<int,int> m;
  for(int i=2;i<=x;++i){
    while(x%i==0){
      m[i]++;
      x /= i;
    }
  }

  ostringstream oss;
  for(const auto& s:m){
    if(s.second != 1){
      oss << s.first << "^" << s.second;
    }
    else{
      oss << s.first;
    }
    oss << " * ";
  }  
  string result = oss.str();
  if(!result.empty()){
    result.erase(result.size() - 3);
  }

  cout << result << "\n";
  return 0;
}
