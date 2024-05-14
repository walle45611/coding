#include <bits/stdc++.h>

using namespace std;

int evaluate_postfix(string expression) {
  stack<int> operands;
  stringstream ss(expression);
  string token;

  while (ss >> token) {
    if (token == "+" || token == "-" || token == "*" || token == "/") {
      int operand2 = operands.top();
      operands.pop();
      int operand1 = operands.top();
      operands.pop();
      if (token == "+") operands.push(operand1 + operand2);
      else if (token == "-") operands.push(operand1 - operand2);
      else if (token == "*") operands.push(operand1 * operand2);
      else if (token == "/") operands.push(operand1 / operand2);
    } else {
      operands.push(stoi(token));
    }
  }

  return operands.top();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;

  cin.ignore(); 
  for (int i = 0; i < n; ++i) {
    string expression;
    getline(cin, expression);
    int result = evaluate_postfix(expression);
    cout << result << endl;
  }
  cin.ignore();

  return 0;
}

