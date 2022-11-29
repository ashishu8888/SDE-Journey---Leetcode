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
    vector<int> a,b;
   void a1(TreeNode* root)
    {
       
       if(!root)
           return ;
       
       
        if(root->left == NULL and root->right == NULL)
        { 
            a.push_back(root->val);
           
        }
    
       a1(root->left);
       a1(root->right);
         
    }
    void a2(TreeNode* root)
    {
        if(!root)
           return ;
       
       
        if(root->left == NULL and root->right == NULL)
        { 
            b.push_back(root->val);
           
        }
    
       a2(root->left);
       a2(root->right);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
          
        a1(root1);
        a2(root2);
        
        if(a.size() != b.size())
        {
            return false;
        }
        
        for(int i=0;i<a.size();i++)
        {
            
            
            if(a[i]!= b[i])
                return false;
        }
        
        return true;
        
    }
};