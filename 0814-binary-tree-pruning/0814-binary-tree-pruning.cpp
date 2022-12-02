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
    
    TreeNode* as(TreeNode* root)
    {
        if(!root)
            return NULL;
        
        root->left = as(root->left);
        root->right = as(root->right);
        
        if(root->left == NULL and root->right == NULL and root->val == 0)
        {
            return NULL;
        }
        
        return root;
        
    }
    
    
    TreeNode* pruneTree(TreeNode* root) {
        
        return as(root);
        
    }
};