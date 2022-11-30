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
    int deepestLeavesSum(TreeNode* root) {
        
        int s = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            int sum = 0;
            for(int i=0;i<size;i++)
            {
                TreeNode* c = q.front();
                 sum += c->val;
                q.pop();
                if(c->left)
                    q.push(c->left);
                if(c->right)
                    q.push(c->right);
                
               
            }
            
            s = sum;
            
            
        }
        
        return s;
        
    }
};