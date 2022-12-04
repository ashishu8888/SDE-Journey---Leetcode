/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int mile = 0;
    TreeNode* ans = NULL;
    void as(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root)
            return ;
        
        as(root->left,p,q);
        if(root == p)
        {
            mile++;
        }
        else if(root == q)
        {
            mile++;
        }
        as(root->right,p,q);
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        
          queue<TreeNode*> qu;
        
         qu.push(root);
        
        while(!qu.empty())
        {
            
            
            int s = qu.size();
           
            for(int i=0;i<s;i++)
            {
                 mile = 0;
                TreeNode* nr = qu.front();
                qu.pop();
                as(nr,p,q);
                if(mile == 2)
                {
                    ans = nr;
                    //cout<<nr->val<<endl;
                }
                // else{
                //     return ans;
                // }
                
                if(nr->left)
                {
                    qu.push(nr->left);
                }
                
                if(nr->right)
                {
                    qu.push(nr->right);
                }
                
            }
            
            
            
            
        }
        
        return ans;
        
        
    }
};