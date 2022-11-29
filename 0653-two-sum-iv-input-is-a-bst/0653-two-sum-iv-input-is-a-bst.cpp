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
     vector<int> res;
    void in(TreeNode* root)
    {
        
        if(!root)
        {
            return ;
        }
        
        
        
        in(root->left);
    
        res.push_back(root->val);
        
    
        in(root->right);
        
        
    }
    bool findTarget(TreeNode* root, int k) {
       
        
        in(root);
        
       int l=0,h=res.size()-1;
        
        
        while(l<h)
        {
            if(res[l]+res[h] < k)
            {
                
                l++;
                
            }
            
            
            else if(res[l]+res[h] > k)
            {
                h--;   
            }
            
            else if(res[l] + res[h] == k)
            {
                return true;
            }
          
            
        }
        
        
        return false;
        
    }
};