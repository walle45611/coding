#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

    vector<int> xy(2,0);
    while(cin >> xy[0]>> xy[1]){
      sort(xy.begin(),xy.end());
      for(int i = xy[0]+1;i<xy[1];++i){
        if ((i % 5) == 2 || (i % 5) == 3){
          cout << i << "\n";
        }
      }
    }

	return 0;
}
