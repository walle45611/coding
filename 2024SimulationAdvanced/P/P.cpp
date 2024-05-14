#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  char val; // 保持字符类型，确保节点值为字符
  TreeNode *left, *right;
  TreeNode(char x) : val(x), left(nullptr), right(nullptr) {}
};

// 使用字符串流收集遍历结果，直接添加字符值
string collectTraversal(TreeNode* node, function<void(TreeNode*, stringstream&)> traversal) {
  stringstream result;
  traversal(node, result);
  return result.str();
}

void preorder(TreeNode* node, stringstream& result) {
  if (!node || node->val == '-') return; // 假设 '-' 表示 null
  result << node->val << ' ';
  preorder(node->left, result);
  preorder(node->right, result);
}

void inorder(TreeNode* node, stringstream& result) {
  if (!node || node->val == '-') return;
  inorder(node->left, result);
  result << node->val << ' ';
  inorder(node->right, result);
}

void postorder(TreeNode* node, stringstream& result) {
  if (!node || node->val == '-') return;
  postorder(node->left, result);
  postorder(node->right, result);
  result << node->val << ' ';
}

TreeNode* buildTree(const vector<string>& nodes) {
  if (nodes.empty() || nodes[0] == "null") return nullptr;
  queue<TreeNode*> q;
  TreeNode* root = new TreeNode(nodes[0] == "null" ? '-' : nodes[0][0]); // '-' 用作 null 节点的标记
  q.push(root);
  size_t i = 1;
  while (!q.empty() && i < nodes.size()) {
    TreeNode* current = q.front();
    q.pop();
    if (i < nodes.size() && nodes[i] != "null") {
      current->left = new TreeNode(nodes[i][0]);
      q.push(current->left);
    } else if (i < nodes.size()) {
      current->left = new TreeNode('-');
    }
    i++;
    if (i < nodes.size() && nodes[i] != "null") {
      current->right = new TreeNode(nodes[i][0]);
      q.push(current->right);
    } else if (i < nodes.size()) {
      current->right = new TreeNode('-');
    }
    i++;
  }
  return root;
}

int main() {
  string line;
  getline(cin, line);
  stringstream ss(line);
  string temp;
  vector<string> nodes;
  while (ss >> temp) nodes.push_back(temp);

  TreeNode* root = buildTree(nodes);
  cout << collectTraversal(root, preorder).erase(collectTraversal(root, preorder).size()-1) << '\n';
  cout << collectTraversal(root, inorder).erase(collectTraversal(root, inorder).size()-1) << '\n';
  cout << collectTraversal(root, postorder).erase(collectTraversal(root, postorder).size()-1);

  return 0;
}

