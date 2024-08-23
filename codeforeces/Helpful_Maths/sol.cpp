#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  string x;
  while(cin >> x){
    vector<int> ans_vec; 
    for(char a: x){
      if (a - 48 != -5){
        ans_vec.push_back(a-48);
      }
    }
    sort(ans_vec.begin(),ans_vec.end());
    if (ans_vec.size() == 1){
      cout << ans_vec[0];
    }
    else{
      for(int i=0;i<ans_vec.size();++i){
        cout << ans_vec[i];
        if(i != ans_vec.size()-1)
          cout << "+";
      }
    }
    cout << endl;
  }
  return 0;
}
