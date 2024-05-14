#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<string>& nodes) {
  if (nodes.empty() || nodes[0] == "null") return nullptr;

  TreeNode* root = new TreeNode(nodes[0] == "null" ? -1 : stoi(nodes[0]));
  queue<TreeNode**> q;
  q.push(&root->left);
  q.push(&root->right);

  for (size_t i = 1; i < nodes.size(); i++) {
    TreeNode** curPtr = q.front();
    q.pop();

    if (nodes[i] != "null") {
      *curPtr = new TreeNode(stoi(nodes[i]));
    } else {
      *curPtr = new TreeNode(-1);
    }

    if (*curPtr) {
      q.push(&((*curPtr)->left));
      q.push(&((*curPtr)->right));
    }
  }
  return root;
}

void dfs(TreeNode* node, vector<int>& path, vector<vector<int>>& allPaths) {
  if (!node) return;

  path.push_back(node->val);

  bool leftIsMinusOne = node->left && node->left->val == -1 && !node->left->left && !node->left->right;
  bool rightIsMinusOne = node->right && node->right->val == -1 && !node->right->left && !node->right->right;

  if (leftIsMinusOne && rightIsMinusOne) {
    if (node->val != -1) {
      if (find(allPaths.begin(), allPaths.end(), path) == allPaths.end()) {
        allPaths.push_back(path);
      }
    }
    path.pop_back();
    return;
  }

  if (!node->left && !node->right && node->val != -1) {
    if (find(allPaths.begin(), allPaths.end(), path) == allPaths.end()) {
      allPaths.push_back(path);
    }
  } else {
    if (node->left) dfs(node->left, path, allPaths);
    if (node->right) dfs(node->right, path, allPaths);
  }

  path.pop_back();
}

int main() {
  string input;
  bool first = true;
  while (getline(cin, input)) {
    vector<string> nodes;
    stringstream ss(input);
    string node;
    while (getline(ss, node, ',')) {
      nodes.push_back(node);
    }

    TreeNode* root = buildTree(nodes);
    vector<int> path;
    vector<vector<int>> allPaths;
    dfs(root, path, allPaths);

    if(!first)cout << "\n";
    first =false;
    for(int i=0;i<allPaths.size();++i){
      for(int j=0;j<allPaths[i].size();++j){
        cout << allPaths[i][j];
        if(j!=allPaths[i].size()-1) cout << "->";
      }
      if(i!=allPaths.size()-1) cout << "\n";
    }
  }
  return 0;
}

