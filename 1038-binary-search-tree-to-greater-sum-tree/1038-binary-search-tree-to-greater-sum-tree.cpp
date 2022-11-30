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
     map<int,int> m;
    void in(TreeNode* root)
    {
        if(!root) return ;
        
        in(root->left);
        
        v.push_back(root->val);
        
        in(root->right);
        
    }
    
     void as(TreeNode* root)
    {
        if(!root) return ;
        
        as(root->left);
        
        root->val = m[root->val];
        
        as(root->right);
        
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        if(!root)
        {
            return NULL;
        }
        
        else if(root->left == NULL and root->right== NULL)
        {
            return root;
        }
        
        in(root);
        
        int pre[v.size()];
        pre[0] = v[0];
        
        for(int i=1;i<v.size();i++)
        {
            pre[i] = pre[i-1] + v[i];
        }
        
        int x = pre[v.size()-1];
        
        for(int i=0;i<v.size();i++)
        {
            m[v[i]] = x - pre[i] + v[i];
        }
        
        as(root);
        
          return root;
        
    }
    
};