#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int t,count=1;
  cin >> t;
  cin.ignore();
  while(t--){
    int ans;
    string team,judge;
    getline(cin,team);
    getline(cin,judge);

    if (team == judge){
      ans =0;
    }
    else{
      team.erase(remove_if(team.begin(), team.end(), ::isspace), team.end());
      if(team == judge){
        ans = 2;
      }
      else{
        ans = 1;
      }
    }

    cout << "Case " << count << ": ";
    switch(ans){
      case 0:
        cout << "Yes\n";
        break;
      case 1:
        cout << "Wrong Answer\n";
        break;
      case 2:
        cout << "Output Format Error\n";
        break;

    }
    count++;
  }

  return 0;
}
