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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        stack<TreeNode*>nodes;
        TreeNode* root=new TreeNode(preorder[0]);
        nodes.push(root);
        int prei=1, posti=0;
        while(!nodes.empty()){
            TreeNode* current=nodes.top();
            if(current->val==postorder[posti]){
                nodes.pop();
                posti++;
            }else{
                TreeNode* newn=new TreeNode(preorder[prei++]);
                if(!current->left){
                    current->left=newn;
                }else{
                    current->right=newn;
                }
                nodes.push(newn);
            }
        }
        return root;
    }
};