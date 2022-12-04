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
        if(!root) return 0;
        
        int left = as(root->left);
        int right = as(root->right);
        
        ans += abs(left) + abs(right);
        
        return (left+right + root->val-1);
        
    }
    int distributeCoins(TreeNode* root) {
        
        
        int a = as(root);
        
        return ans;
          
    }
};