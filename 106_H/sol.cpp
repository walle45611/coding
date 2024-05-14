#include<bits/stdc++.h>

using namespace std;

bool isOperator(char c) {
  return c == '+' || c == '-' || c == '*' || c == '/';
}

int solve(string postfix) {
  stack<int> stk;

  stringstream ss(postfix);
  string token;
  while (ss >> token) {
    if (!isOperator(token[0])) {
      stk.push(stoi(token));
    } else {
      int op2 = stk.top(); stk.pop();
      int op1 = stk.top(); stk.pop();
      switch(token[0]) {
        case '+': stk.push(op1 + op2); break;
        case '-': stk.push(op1 - op2); break;
        case '*': stk.push(op1 * op2); break;
        case '/': stk.push(op1 / op2); break;
      }
    }
  }

  return stk.top();
}

int main() {
  ios_base::sync_with_stdio(false),cin.tie(nullptr);
  int n;
  cin >> n;
  cin.ignore(); 

  for (int i = 0; i < n; ++i) {
    string postfix;
    getline(cin, postfix);

    int result = solve(postfix);
    cout << result << endl;
  }

  return 0;
}

