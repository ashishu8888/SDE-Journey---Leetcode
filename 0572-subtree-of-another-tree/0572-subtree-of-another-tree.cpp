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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        
        if(!root || !subRoot)
        {
            return !root and !subRoot;
        }
        else if(isSame(root,subRoot))
        {
            return true;
        }
        else {
           return (isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
        }
         
    }
    
    bool isSame(TreeNode* s,TreeNode* t)
    {
        if(!s || !t)
        {
            return !s and !t;
        }
        else if(s->val == t->val)
        {
            return isSame(s->left,t->left) and isSame(s->right,t->right);
        }
        else{
            return false;
        }
        
        
        
        
        
        
        
        
    }
};