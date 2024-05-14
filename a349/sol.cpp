#include<bits/stdc++.h>

using namespace std;

int main() {
  vector<int> memory(8, 0);
  int reg[4] = {0};

  // 讀入記憶體初始值
  for (int i = 0; i < memory.size(); ++i) {
    scanf("%d", &memory[i]);
  }

  int t;
  scanf("%d", &t);
  while (t--) {
    char cmd[5];
    scanf("%s", cmd);
    switch (cmd[0]) {
      case 'L': {
                  int r, a;
                  scanf("%d%d", &r, &a);
                  reg[r] = memory[a];
                  break;
                }
      case 'A': {
                  int rf, r1, r2;
                  scanf("%d%d%d", &rf, &r1, &r2);
                  reg[rf] = reg[r1] + reg[r2];
                  break;
                }
      case 'S': {
                  int m1, r1s;
                  scanf("%d%d", &m1, &r1s);
                  memory[m1] = reg[r1s];
                  break;
                }
      case 'M': {
                  int r1m, r2m;
                  scanf("%d%d", &r1m, &r2m);
                  reg[r1m] = reg[r2m];
                  break;
                }
    }
  }

  // 顯示結果
  printf("%d\n", reg[0]);
  printf("%d", memory[0]);

  return 0;
}

