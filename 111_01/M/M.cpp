#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> extractMatrix(const string& input) {
  regex reg("\\d+");
  sregex_iterator begin(input.begin(), input.end(), reg);
  sregex_iterator end;
  vector<vector<int>> matrix;
  vector<int> row;

  int count = 0;
  int size = 0;
  bool sizeDetermined = false;

  for (sregex_iterator i = begin; i != end; ++i) {
    smatch match = *i;
    int num = stoi(match.str());
    row.push_back(num);
    count++;
    if (input[match.position() + match.length()] == ']') {
      if (!sizeDetermined) {
        size = count;
        sizeDetermined = true;
      }
      matrix.push_back(row);
      row.clear();
      count = 0;
    }
  }
  return matrix;
}

vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
  size_t rows = matrix.size();
  if (rows == 0) return {}; 
  size_t cols = matrix[0].size();
  vector<vector<int>> transposed(cols, vector<int>(rows));

  for (size_t i = 0; i < rows; ++i)
    for (size_t j = 0; j < cols; ++j)
      transposed[j][i] = matrix[i][j];  

  return transposed;
}
void printMatrix(const vector<vector<int>>& matrix) {
  cout << "[";
  for (size_t i = 0; i < matrix.size(); ++i) {
    cout << "[";
    if (!matrix[i].empty()) {  
      for (size_t j = matrix[i].size() - 1; j > 0; j--) {  
        cout << matrix[i][j] << ",";
      }
      cout << matrix[i][0];  
    }
    cout << "]";
    if (i != matrix.size() - 1) cout << ",";
  }
  cout << "]" << endl;
}

int main() {
  string input;
  getline(cin, input);

  auto matrix = extractMatrix(input);
  auto transposedMatrix = transpose(matrix);
  printMatrix(transposedMatrix);

  return 0;
}

