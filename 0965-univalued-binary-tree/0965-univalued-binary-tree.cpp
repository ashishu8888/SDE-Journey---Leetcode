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
    bool d = true;
   void as(TreeNode* root,int x)
    {
        if(root == nullptr)
        {
            return ;
        }
        
        as(root->left,root->val);
        if(root->val != x)
        {
            d = false;
            
        }
        as(root->right,root->val);
        
    }
    bool isUnivalTree(TreeNode* root) {
        
        if(!root)
        {
            return true;
        }
    
    as(root,root->val);
        
        return d;
        
    }
};