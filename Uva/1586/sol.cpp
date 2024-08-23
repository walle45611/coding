#include <bits/stdc++.h>
using namespace std;

unordered_map<char, float> atomic_map = {
  {'C', 12.01},
  {'H', 1.008},
  {'O', 16.00},
  {'N', 14.01}
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    string atomic;
    cin >> atomic;
    atomic += 'Z';

    string number;

    int i = 0;
    double total = 0;
    while (i < atomic.size())
    {
      if (i != 0)
      {
        if (atomic[i] >= 65)
        {
          total += atomic_map[atomic[(i - number.size()) - 1]] * stoi(number.size() == 0 ? "1" : number);
          number = "";
        }
        else
          number += atomic[i];
      }
      i++;
    }
    printf("%.3f\n", total);
  }
}
