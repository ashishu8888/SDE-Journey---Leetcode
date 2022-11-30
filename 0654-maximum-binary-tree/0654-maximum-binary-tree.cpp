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
    TreeNode* as(vector<int>& nums , int l,int h)
    {
       
        if(l>h)
        {
            return NULL;
        }
        
         int mi = INT_MIN;
        
       for(int i=l;i<=h;i++)
        {
            
            mi = max(mi,nums[i]);
            
        }
        
        int x = 0;
        
        for(int i=l;i<=h;i++)
        {
            
            if(mi == nums[i])
            {
                x = i;
                break;
            }
            
        }
        
        
        TreeNode * root = new TreeNode(mi);
        
        root->left = as(nums,l,x-1);
        
        root->right = as(nums,x+1,h);
        
        return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        
        
       return  as(nums,0,nums.size()-1);
        
        
    }
};