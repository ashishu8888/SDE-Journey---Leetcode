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
    void as(TreeNode* root,int cm)
    {
        
        if(!root) return ;
        
        if(cm<=root->val)
        {
            ans++;
            cout<<root->val<<" ";
        }
          cm = max(cm,root->val);
        as(root->left,cm);
        
        
      
        
        as(root->right,cm);
        
    }
    int goodNodes(TreeNode* root) {
       
        as(root,INT_MIN);
        cout<<endl;
        return ans;
        
        
        
    }
};