#include <bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

    vector<vector<int>> v(3,vector<int>(3));
    for(int i=0;i<3;++i){
      for(int j=0;j<3;++j){
        cin >> v[i][j];
      }
    }
  
    cout << v[0][0] * v[1][0] + v[0][1] * v[1][1] + v[0][2] * v[1][2] << "\n";
	return 0;
}
