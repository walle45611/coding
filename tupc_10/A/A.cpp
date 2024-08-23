#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> seq(0,n);

    for(int i=0;i<n;++i){
      int tmp;
      cin >> tmp;
      seq.push_back(tmp);
    }
    
    int max = INT_MIN;
    for(int i=0;i<n;++i){
      for(int j=i;j<n;++j){
        if (i==j)
          continue;
        if ((seq[i] - seq[j]) > max)
          max = seq[i]-seq[j];
      }
    }
    cout << max << endl; 
  }
  return 0;
}
