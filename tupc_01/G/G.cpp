#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    int w,n;
    cin >> n >> w;
    vector<int> seq;
    for(int i=0;i<n;++i){
      int num;
      cin >> num;
      seq.push_back(num);
    }
  
    int p = 0;
    int max_index;
    double max_num= -DBL_MAX;
    while((p+w-1) <= n){
      int count = 0;
      for(int i=0;i<w-1;++i){
        if (seq[p+i] * seq[p+i+1] <  0){
          count++;
        }
      }
      if ((count / (w-1)) > max_num && max_index != p+1){
        cout << max_index << "\n";
        max_index = p+1;
        max_num = (count / (w-1));
      }
      ++p;
    }
  }

  return 0;
}
