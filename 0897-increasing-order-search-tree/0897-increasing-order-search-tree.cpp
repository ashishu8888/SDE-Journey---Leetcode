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
    void in(TreeNode* root , vector<int> &v)
    {
        if(!root) return;
        
        in(root->left,v);
        v.push_back(root->val);
        in(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        
        in(root,v);
        
        TreeNode* root2 = new TreeNode(v[0]);
        
        TreeNode* cur = root2;
        for(int i=1;i<v.size();i++){
            TreeNode* root2 = new TreeNode(v[i]);
            cur->right = root2;
            cur = root2;
        
    }
        
        return root2;
    }     
};