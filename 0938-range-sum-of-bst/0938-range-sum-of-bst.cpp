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
    int x;
    void in(TreeNode* root, int low, int high)
    {
        if(!root)
        {
            return ;
        }
        
        
        in(root->left,low,high);
        if(root->val >= low and root->val <= high)
        {
            x += root->val;
        }
        
        in(root->right,low,high);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
    
        in(root,low,high);
        
        return x;
    }
};