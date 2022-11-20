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

    bool evaluateTree(TreeNode* root) {
        
//         if (root == nullptr) {
            
//             return true;
//         }
        if (root->left == nullptr) {
                return root->val ;
            }
        
       bool lt =  evaluateTree(root->left);
       bool rt =   evaluateTree(root->right);
        
       if(root->val == 2) 
       {
           return (lt || rt);
       }
        else 
        {   
            return (lt && rt);
        }
        
//         if(root->val == 2)
//         {
//             return (root->left->val || root->right->val);
//         }
//         else {
//             return (root->left->val and root->right->val);
//         }
         
                   
    }
};