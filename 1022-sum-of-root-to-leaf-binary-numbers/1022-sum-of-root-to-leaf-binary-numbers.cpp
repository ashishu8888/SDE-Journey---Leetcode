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
    void as(TreeNode* root,string s)
    {       
        if(!root)
            return ;
        
        if(  root->left == NULL and root->right == NULL)
        {
             
          
           
           // s = "";
            s += to_string(root->val);
             cout<<s<<endl;
             int u =  stoi(s, 0, 2);
            ans += u;
         
       
        }
        
         s += to_string(root->val);
        
         as(root->left,s);
         as(root->right,s);
        
        
    }
    
    int sumRootToLeaf(TreeNode* root) {
        
      
        as(root,"");
        
        return ans;
       
       
        
    }
};