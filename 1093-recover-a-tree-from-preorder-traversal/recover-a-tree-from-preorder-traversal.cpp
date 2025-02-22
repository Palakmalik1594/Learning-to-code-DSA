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
    TreeNode* recoverFromPreorder(string traversal) {
        vector<pair<int,int>>pv;
        int i=0;
        while(i<traversal.size()){
            int depth=0;
            while(i<traversal.size() && traversal[i]=='-'){
                depth++;
                i++;
                
            }
            int num=0;
            while(i<traversal.size() && traversal[i]!='-'){
                num=num*10+(traversal[i]-'0');
                i++;
            }
            pv.push_back({depth,num});
        }
        stack<pair<int,TreeNode*>>st;
        TreeNode* root=nullptr;
        for(auto it:pv){
            int depth=it.first;
            int value=it.second;
            TreeNode* node=new TreeNode(value);
            while(!st.empty() && st.top().first>=depth){
                st.pop();
            }
            if(!st.empty()){
                TreeNode* parent=st.top().second;
                if(parent->left==nullptr){
                    parent->left=node;
                }else{
                    parent->right=node;
                }
            }else{
                root=node;
            }
            st.push({depth,node});
        }
        return root;
    }
};