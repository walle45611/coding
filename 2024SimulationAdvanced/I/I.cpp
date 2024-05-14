#include<bits/stdc++.h>
using namespace std;

int calcAge(const string& current, const string& birth) {
  int d1, m1, y1, d2, m2, y2;
  sscanf(current.c_str(), "%d/%d/%d", &d1, &m1, &y1);
  sscanf(birth.c_str(), "%d/%d/%d", &d2, &m2, &y2);

  if (y2 > y1 || (y2 == y1 && m2 > m1) || (y2 == y1 && m2 == m1 && d2 > d1)) {
    return -1; // "Invalid birth date"
  }
  int age = y1 - y2;
  if (m2 > m1 || (m2 == m1 && d2 > d1)) {
    age--;
  }
  if (age > 130) {
    return -2; // "Check birth date"
  }
  return age;
}

int main() {
  int T;
  cin >> T;
  string current, birth;
  for (int i = 1; i <= T; i++) {
    cin >> ws; // 用來讀取並丟棄前面的空白行
    getline(cin, current);
    getline(cin, birth);
    int age = calcAge(current, birth);
    cout << "Case #" << i << ": ";
    if (age == -1) {
      cout << "Invalid birth date" << endl;
    } else if (age == -2) {
      cout << "Check birth date" << endl;
    } else {
      cout << age << endl;
    }
  }
  return 0;
}

