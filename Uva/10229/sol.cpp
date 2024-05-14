#include <bits/stdc++.h>

using namespace std;

int n, m, mod;
struct mat {
  long long a[2][2]; // 2x2 矩陣
  mat() {
    memset(a, 0, sizeof(a)); // 將矩陣初始化為 0
  }
  // 矩陣乘法運算子的重載
  mat operator * (const mat &b) const {
    mat ret; // 用於保存結果的矩陣
    for( int i = 0; i < 2; ++i )
      for( int j = 0; j < 2; ++j )
        for( int k = 0; k < 2; ++k )
          // 矩陣乘法運算，同時對結果取模
          ret.a[i][j] = ( ret.a[i][j] + a[i][k] * b.a[k][j] ) % mod;
    return ret;
  }
};
mat f; // 用於計算快速冪的矩陣
void solve(){
  mod = 1<<m; // 計算模數 mod = 2^m
  mat ret; // 用於保存結果的矩陣
  ret.a[0][0] = 0;
  ret.a[1][0] = 1;
  f.a[0][0] = 0;
  f.a[0][1] = 1;
  f.a[1][0] = 1;
  f.a[1][1] = 1;
  // 快速冪算法
  while (n){
    if (n & 1){
      ret = f * ret;
    }
    f = f * f;
    n >>= 1;
  }
  cout << ret.a[0][0] << "\n"; // 輸出結果
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  while (cin >> n >> m) solve(); // 讀入 n 和 m 並計算結果
}

