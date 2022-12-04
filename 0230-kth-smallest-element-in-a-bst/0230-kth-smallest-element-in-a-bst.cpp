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
    int a=1,K=-1,ans=-1;
    void as(TreeNode* root)
    {
        
        if(!root) 
            return ;
        
        as(root->left);
        
        if(a == K)
        {
            ans = root->val;
             cout<<root->val<<endl;
        }
    
            a++;
        
       // cout<<root->val<<endl;
        as(root->right);
        
    }
    int kthSmallest(TreeNode* root, int k) {
      //  cout<<k<<" k is : "<<endl;
        K = k;
        as(root);
        
        return ans;
        
    }
};