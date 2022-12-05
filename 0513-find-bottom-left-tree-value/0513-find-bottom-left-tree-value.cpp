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
    int ans = 0;
    int as(TreeNode* root)
    {
        if(!root)
            return 0;
        
        return 1 + max(as(root->left),as(root->right));
        
    }
    int findBottomLeftValue(TreeNode* root) {
        
        if(!root)
            return ans;
        
        
        int l = as(root->left);
        int r = as(root->right);
        
        if(l>r)
        {
           return findBottomLeftValue(root->left);
        }
        else if(r>l)
        {
            return findBottomLeftValue(root->right);
        }
        
        
            ans = root->val;
           return findBottomLeftValue(root->left);
        
        
        
    }
};