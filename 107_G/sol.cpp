#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* constructTree(const vector<string>& nums) {
  if(nums.empty() || nums[0] == "null") return nullptr;
  TreeNode* root = new TreeNode(stoi(nums[0]));
  queue<TreeNode*> q;
  q.push(root);
  int i = 1;
  while(!q.empty() && i < nums.size()) {
    TreeNode* node = q.front();
    q.pop();
    if(i < nums.size() && nums[i] != "null") {
      node->left = new TreeNode(stoi(nums[i]));
      q.push(node->left);
    }
    ++i;
    if(i < nums.size() && nums[i] != "null") {
      node->right = new TreeNode(stoi(nums[i]));
      q.push(node->right);
    }
    ++i;
  }
  return root;
}

int findHeight(TreeNode* root) {
  if(!root) return 0;
  return 1 + max(findHeight(root->left), findHeight(root->right));
}

int findLongestPath(TreeNode* root) {
  if(!root) return 0;
  int leftHeight = findHeight(root->left);
  int rightHeight = findHeight(root->right);
  int longestPathThroughRoot = leftHeight + rightHeight;
  int leftLongestPath = findLongestPath(root->left);
  int rightLongestPath = findLongestPath(root->right);
  return max(longestPathThroughRoot, max(leftLongestPath, rightLongestPath));
}

int main() {
  int n;
  cin >> n;
  cin.ignore();  
  while(n--) {
    string s;
    getline(cin, s);
    s = s.substr(1, s.size()-2); 
    replace(s.begin(), s.end(), ',', ' ');
    istringstream iss(s);
    vector<string> nums{istream_iterator<string>{iss}, istream_iterator<string>{}};
    TreeNode* root = constructTree(nums);
    int result = findLongestPath(root);
    cout << result << "\n";
  }
  return 0;
}

