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
    int h(TreeNode* root)
    {
         if(!root)
            return 0;
        
        
        return 1 + max(h(root->left),h(root->right));
        
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
            if(!root)
            return NULL;
        
        int l = h(root->left);
        int r = h(root->right);
        
        if(l>r)
        {
            return subtreeWithAllDeepest(root->left);
        }
        else if(r>l)
        {
             return subtreeWithAllDeepest(root->right);
        }
        
        
            return root;
    }
};