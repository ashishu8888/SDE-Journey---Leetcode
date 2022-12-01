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
    vector<int> v;
    void in(TreeNode* root)
    {
        if(!root) return ;
        
        in(root->left);
        v.push_back(root->val);
        in(root->right);
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        in(root1);
        in(root2);
        
        sort(v.begin(),v.end());
        
        return v;
        
    }
};