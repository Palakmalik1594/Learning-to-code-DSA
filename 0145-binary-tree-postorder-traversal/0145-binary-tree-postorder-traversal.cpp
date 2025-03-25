/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void prsti(TreeNode* root,vector<int>&arr){
    if(!root) return;
          prsti(root->left,arr);
          prsti(root->right,arr);
          arr.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>arr;
        prsti(root,arr);
        return arr;
    }
};