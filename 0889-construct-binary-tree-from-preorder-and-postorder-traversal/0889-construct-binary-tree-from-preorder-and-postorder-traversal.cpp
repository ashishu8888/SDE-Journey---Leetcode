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
    int i = 0;
    
    TreeNode* as(vector<int>& pre, vector<int>& post)
    {
         if(i == pre.size())
        {
            return NULL;
        }
        
        TreeNode* root = new TreeNode(pre[i++]);
        

        int a = -1 , b = -1;
        //left
    if(i!=pre.size())
    {
            for(int j=0;j<post.size();j++)
        {
            
            if(root->val == post[j])
            {
                a = j;
            }
            
            if(pre[i] == post[j])
            {
                b = j;
            }
            
        }
        
        if(a > b)
        {
            root->left = as(pre,post);
        }
    }
        
      if(i != pre.size())
        {
           //right
        for(int j=0;j<post.size();j++)
        {
            
            if(root->val == post[j])
            {
                a = j;
            }
            
            if(pre[i] == post[j])
            {
                b = j;
            }
            
        }
        
        if(a > b)
        {
            root->right = as(pre,post);
        }
          
        }
        
        
        
        
        return root;
        
        
    }
    
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
       
        return as(pre,post);
        
        
    }
};