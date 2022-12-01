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
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        
        int x = 1;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(q.size())
        {
            int size = q.size();
            if(x%2)
            {
                for(int i=0;i<size;i++)
                {
                    TreeNode* curr = q.front();
                    q.pop();
                    if(curr->left)
                        q.push(curr->left);
                    if(curr->right)
                        q.push(curr->right); 
                }
            }
            else{
                
                
                vector<TreeNode*> a;
                vector<int> b;
                for(int i=0;i<size;i++)
                {
                    TreeNode* curr = q.front();
                    q.pop();
                    if(curr->left)
                        q.push(curr->left);
                    if(curr->right)
                        q.push(curr->right); 
                    a.push_back(curr);
                    b.push_back(curr->val);
                    
                }
                
                int i = b.size()-1;
                
               for(int j=0;j<a.size();j++)
               {
                   
                   a[j]->val = b[i--];
                   //cout<<a[j]->val<<endl;
               }
                
                
            }
            x++;
        }
        
        
        return root;
        
    }
};