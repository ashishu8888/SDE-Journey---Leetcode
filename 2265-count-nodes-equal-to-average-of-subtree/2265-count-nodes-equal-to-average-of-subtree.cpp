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
    void as(TreeNode* root,int &n,int &s)
    {
        
          if(!root)
        return ;
        
        as(root->left,n,s);
        s += root->val;
        n++;
        as(root->right,n,s);
        
        
        
    }
    void aa(TreeNode* root)
    {
        
       if(root == NULL) return ;
       
        aa(root->left);
          int x=0,y=0;
        as(root,x,y);
        
        if(root->val == (y/x))
        {
             ans++;
        }
        aa(root->right);
        
        
        
    }
    int averageOfSubtree(TreeNode* root) {
       aa(root);
       
            return ans;
        
    }
};