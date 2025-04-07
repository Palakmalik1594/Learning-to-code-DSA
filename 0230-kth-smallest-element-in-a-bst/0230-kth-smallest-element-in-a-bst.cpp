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
    void finds(TreeNode* root,vector<int>&arr){
        if(!root) return;
        arr.push_back(root->val);
        finds(root->left,arr);
        finds(root->right,arr);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>arr;
        finds(root,arr);
        sort(arr.begin(),arr.end());
        int p=-1;
        for(int i=1;i<=arr.size();i++){
            if(i==k){
            p=arr[k-1];
            }
        }
        return p;
    }
};