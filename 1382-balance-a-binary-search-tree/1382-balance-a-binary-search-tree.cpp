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
        if(!root)
            return ;
        
        in(root->left);
        v.push_back(root->val);
        in(root->right);
    }
    
    TreeNode* as(vector<int> nums,int l,int h)
    {
        
        if(l>h) 
            return NULL;
        
        int mid = (l+h)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        
        root->left = as(nums,l,mid-1);
        root->right =as(nums,mid+1,h);
        
        
        return root;
        
        
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        
        in(root);
        
        
      return  as(v,0,v.size()-1);
        
        
        
        
        
    }
};