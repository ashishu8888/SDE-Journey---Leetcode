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
    vector<int> v;
    void as(TreeNode* root,int cmi,int cmx)
    {
        if(!root)
            return ;
        
        
        cmi = min(cmi,root->val);
        cmx = max(cmx,root->val);
       ans = max(ans,abs(cmi-cmx));
        
        as(root->left,cmi,cmx);
         
        
        as(root->right,cmi,cmx);
        
        
    }
    int maxAncestorDiff(TreeNode* root) {
        
        as(root,root->val,root->val);
        
        return ans;
        
    }
};