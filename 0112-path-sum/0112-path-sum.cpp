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
    int ans= 0;
    void in(TreeNode* root,int x,int s)
    {
        if(!root) return ;
        
        if(root->left == NULL and root->right == NULL)
        {
            if(x + root->val == s)
            {
                ans = 1;
              //  x = 0;
                
            }
            cout<<x<<endl;
        }
        
        x += root->val;
        
        in(root->left,x,s);
        
        in(root->right,x,s);
        
      
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
        {
        
                 return false;
        }
        
        in(root,0,targetSum);
        
        return ans;
        
        
        
    }
};